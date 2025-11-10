#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


//my sorting function
//using bubbleSort as it's logically easiest to follow
//using source code from geeksforgeeks.org as starting point

//bubbleSort ascendning function
void bubbleSortAscend(int *arr, int size){
	int temp;
	int swapped;
	for(int i =0; i<size-1; i++){
		swapped=0;
		for(int j = 0; j< size - i - 1; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}

		if(swapped == 0) {
			break;
		}
	}
}

void bubbleSortDescend(int *arr, int size){
	int temp;
	int swapped;
	for(int i = 0; i<size-1; i++){
		swapped = 0;
		for(int j=0; j<size - i -1; j++){
			if(arr[j] < arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if(swapped == 0) {
			break;
		}
	}
}

void sort_integer_array(int *begin, int *end, int ascending) {
	if(ascending == 1) {
		bubbleSortAscend(begin, end-begin);
	}
	else{
		bubbleSortDescend(begin, end-begin);
	}
}



int main(){
//read integers from user for number of integers in array
	 int x;
	 printf("Enter size of array: ");
	 scanf("%d",&x);

	 
//make 3 arrays using malloc
	int *original = (int *)malloc(x * sizeof(int));

	int *ascending = (int *)malloc(x * sizeof(int));

	int *descending = (int *)malloc(x * sizeof(int));
//check return value of malloc(), if NULL print an error and quit
	if(original == NULL || ascending == NULL || descending == NULL){
		perror("malloc returned NULL");
		exit(1);
	}
 //fill array with random integers 
 	srandom((time(NULL)));
//loop through size of array and fill with random, max value of random int = 100 
	for(int i = 0; i<x; i++){
		original[i] = random() %100;
	} 

 //make copies of original array
 	for(int i = 0; i<x; i++) {
		descending[i] = original[i];
		ascending[i] = original[i];
	}
 
//sort ascendning and descendning arrays
	sort_integer_array(ascending, ascending+x, 1);
	sort_integer_array(descending, descending+x, 0);

//print original array
	printf("original: ");
	for(int i =0; i<x; i++){
		printf("%d ", original[i]);
	}
	printf("\n");
//deallocate space of original
	free(original);

//print ascendning array
	printf("ascending: ");
	for(int i=0; i<x; i++){
		printf("%d ", ascending[i]);
	}
	printf("\n");
//deallocate space of ascending
	free(ascending);

//print descending array
	printf("descending: ");
	for(int i=0;i<x; i++) {
		printf("%d ", descending[i]);
	}
	printf("\n");
//deallocate space of descending
	free(descending);

	//return 0 to end main function
	return 0;

       	
} 
