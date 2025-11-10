#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"
#include <string.h>


//compare method 
int compareStrings(const void *a, const void *b) {
	//make pointers char * to succcessfully use strcmp() function 
	const char *string1 = a;
	const char *string2 = b;

	//strcmp returns 0 if strings are equal
	//returns non zero otherwise
	return strcmp(string1, string2);
}

//main method
int main(int argc, char **argv) {
	//create list
	struct List list;

	//initialize empty list 
	initList(&list);

	//if # arguments in command line is less than or equal to 1, return 1
	if(argc <= 1) {
		return 1;
	}
	//increment argv because first thing in command line is ./revecho and we don't want to print this

	argv++;

	//while there is a pointer at *argv -> while there is a string being pointed to, not NULL,build list)
	while(*argv) {
		addFront(&list, *argv++);
	} 
	//starting at beginning of list, but addFront puts each next incremental node in front of what was just put in, therefore building backwards

	//get head node, set equal to traversal node
	struct Node *current = list.head;

	//print list while traversal node is not NULL
	while(current !=NULL) {
		//cast current to a char * pointer becuase the data is a string
		printf("%s\n", (char *)current->data);
		//increment to next node in list
		current = current->next;
	}

	//looking for dude
	//use findNode function with "dude" as dataSought param, and compareString as compare function parameter
	//compareString defined outside of main 
	printf("\n");
	if(findNode(&list, "dude", compareStrings)) {
		printf("dude found\n");
	}
	else {
		printf("dude not found\n");
	}

	//removeAllNodes(&list) to remove all nodes at the end to prevent memory erros/leaks
	//free all nodes using removeAllNodes method because we have already printed them, so we need to free this space used
	removeAllNodes(&list);
	return 0;
}
