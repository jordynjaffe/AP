#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mdb.h"
#include "mylist.h"

int main(int argc, char **argv) {
	//sole command line argument = database file name
	//thus argc = 2, only one command line argument + program name
	//if argc != 2 write an error to stderr
	if(argc!=2) {
		fprintf(stderr, "Usage: mdb-lookup <file_name>\n");
		return 1;
	}

	//user input array, up to 1000 characters
	char line[1000];
	char search_first5[6];

	//when the program starts, you must first read all records from the database file into memory
	//records must be kept in a linked list
	
	//open file

	//just want to read file so use "rb"
	FILE *file = fopen(argv[1], "rb");

	//if *file is null, perror
	if(file == NULL) {
		perror("No file found");
		return 1;
	}

	//create prevNode to use in addAfter later
	struct Node *prevNode = NULL;



	//create list of records
	struct List records;
	initList(&records);

	//create record # tracker
	int record_number =1;

	//create buffer
	struct MdbRec *record;
	while(1) {
		record = malloc(sizeof(struct MdbRec));
		if(record == NULL) {
			perror("malloc returned NULL");
			exit(1);
		}

	//read one record at a time, therefore, the number of objects we want to read using fread() is 1
	//if not equal to 1, free that record and break out of while
		if(fread(record, sizeof(struct MdbRec), 1, file) != 1) {
			free(record);
			break;
		}
		//while it reads one line at a time of file, create a node for each line, adding it after the last line added
		//set null terminators for name and msg components of each record
		record->name[15] = '\0';
		record->msg[23] = '\0';
		struct Node *curNode = addAfter(&records, prevNode, record);
		//iterate 
		prevNode = curNode;
	
	}
	
	while(1) {
		printf("lookup: ");
		

		if(fgets(line, sizeof(line), stdin) == NULL) {
			//check if EOF ctrl d is detected, if it is, break the code to terminate mdb-lookup
			if(feof(stdin)) {
				break;
			}
			//if it's NULL, user just hits enter, fgets can not get anything -> throw perror but continue because we want to print out the entire database if they just hit enter
			perror("fgets failure");
			continue;
		}
		//put 5 character of line into search_first5
		strncpy(search_first5, line, 5);
		//set null terminator
		search_first5[5] = '\0';

		search_first5[strcspn(search_first5, "\n")] = '\0';


		struct Node *node = records.head;
		//prepare a node to iterate through record to check for matches
		//reset record_number to 1 between each "lookup :"
		record_number = 1;

		while(node != NULL) {
			//while there are still records in the database, i.e., node is not NULL
			//create a MdbRec for each node
			//if users search appears in first (name) or second (msg) part of record, print what they said
			struct MdbRec *curRec = (struct MdbRec *)node->data;
			if(strstr(curRec->name, search_first5) || strstr(curRec->msg, search_first5)){
				printf("%4d: {%s} said {%s}\n", record_number, curRec->name, curRec->msg);
			}
			//iterate node and record_number
			node = node->next;
			record_number++;
		}
	}
	//free all nodes and data of the linked list records
	struct Node *traverseFree = records.head;
	while (traverseFree != NULL) {
		struct Node *next = traverseFree->next;
		free(traverseFree->data);
		free(traverseFree);
		traverseFree = next;
	}
	//reset head of list
	//close the file

	records.head = NULL;
	fclose(file);

	return 0;
}

