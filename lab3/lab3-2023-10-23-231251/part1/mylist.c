#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"
#include <assert.h>

struct Node *addFront(struct List *list, void *data) {
	//make first node that holds given data pointer and add to front of list
	//does not manage lifetime of object pointed to by *data
	//return newly created node on success and NULL on failure
	//create n1 by allocating the amount of bytes on the heap for a Node
	//*n1 points to itself, a node holding data
	struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
	//check if there is no data, return NULL
	if(n1 == NULL) {
		return NULL;
	}
	
	//assign (*n1).data (component of struct Node) = data (passed through parameter)
	n1->data = data;
	n1->next = list->head;
	//next component of Node  n1 = head component of list
	list->head = n1;
	//^head component of list is n1
	return n1;
}

void traverseList(struct List *list, void (*f)(void *)) {
	//create traversal pointer
	//should start at head component of list
	struct Node *traverse = list->head;
	//while the traversal is not NULL pointer, continue moving through calling f
	while(traverse != NULL) {
		//call f on each data item, access the data component of the current node
		f(traverse->data);
		//move traversal to the next component of traversal to continue iterating through list
		traverse = traverse->next;
	}


}


struct Node *findNode(struct List *list, const void *dataSought, int(*compar)(const void *, const void *)) {
	//traverse the list comparing each data item with dataSought using compar function 
	//0 = data pointed to by two parameters are equal 
	//non-zero otherwise
	//return the furst node containing the macthing data
	//NULL if not found
	
	//create node pointer we will return, should start at the head
	struct Node *returnNode = list->head;
	//iterate through list comparing, as long as not NULL pointer 
	
	while(returnNode !=NULL) {
		//check if current node's data is equal to dataSought
		if(compar(returnNode->data, dataSought) == 0) {
			//if they are equal return that pointer
			return returnNode;
		}
		//if they are not equal, iterate to next node
		returnNode = returnNode->next;
	}

	//if loop never returns returnNode, i.e, no match in list, return NULL
	return NULL;

}


	
void flipSignDouble(void *data) {
	//flip the sign of the double value pointed to by 'data' by multiplying it by -1 and putting the result back into the memory location
	//retrieve pointer to double
	double *returnVal = (double *)(data);
	//dereference returnVal to manipulate data at the pointer, set the data at the pointer = -1*returnVal
	*returnVal = (-1) * (*returnVal);
}





int compareDouble(const void *data1, const void *data2) {
	//compare two double values pointed to by the two pointers
	//return 0 if same value, else return 1
	
	//retrieve double pointers from *data1 and *data2
	const double *a = (const double *)data1;
	const double *b = (const double *)data2;

	//evaluate data that a and b point to by dereferencing
	if(*a == *b) {
		return 0;
	}
	else {
		return 1;
	}
}

void *popFront(struct List *list) {
	//remove first node from list, deallocate the memory for the node and return the 'data' pointer that was stored in the node
	//returns NULL if the list is empty
	if(isEmptyList(list)) {
		return NULL;
	}
	//get current head node
	struct Node *deleted = list->head;
	//retrieve current head's data
	void *data = deleted->data;
	//get the second node in list, as this will become the head
	struct Node *newHead = deleted->next;
	//make this node the new head
	list->head = newHead;
	//deallocate the memory for the original head node
	free(deleted);
	return data;
}
	


void removeAllNodes(struct List *list) {
	//start at head
	//use popFront() function
	//while the list isn't empty, popfront
	while(!(isEmptyList(list))) {
		popFront(list);
	}
}

struct Node *addAfter(struct List *list, struct Node *prevNode, void *data) {
	//create a node that holds the given data pointer and add a node right after the node passed in as prevNode parameter
	//if prevNode is NULL, this function is equivalent to add Front()
	//prevNode, if not NULL, is assumed to be one of the nodes in the given list
	//behavior of fucntion is undefined if prevNode does not belong in the given list
	//does not manage lifetime of the object pointed to by *data
	//returns the newly created node on success and NULL on failure
	
	//create node
	struct Node *new = (struct Node *)malloc(sizeof(struct Node));
	if(new == NULL) {
		return NULL;
	}
	new->data = data;
	if(prevNode == NULL || isEmptyList(list)) {
		new->next = list->head;
		list->head = new;
		
	}

	//if the list is empty then addAfter also acts as addFront


	else{

	//insert the node after prevNode
	
	//new node's next will be what was previously prevNode's next
	new->next = prevNode->next;

	//prevNode next now equals the new node
	prevNode->next = new;
	}

	return new;

}

void reverseList(struct List *list) {
	//reverse the list by manipulating pointers
	//DO NOT CALL MALLOC (no addFront or addAfter)
	//keep track of three consecutive nodes: previous, current, next and move them along in a while loop
	//at the end prv willl end up pointing to the first element of the reversed list, don't forget to assighn it to list->head
	struct Node *prv = NULL;
	struct Node *cur = list->head;
	struct Node *nxt;

	while(cur) {
		//get the next node
		nxt = cur->next;

		//now make cur's next component be the previous node instead of the one originally after it
		cur->next = prv;

		//iterate pointers
		prv = cur;
		cur = nxt;
	}

	list->head = prv;
}


	





