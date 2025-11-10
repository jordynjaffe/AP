#include "prime.h"
int prime(int x){
	if(x==1){
		return 0;
	}
	int y = 1;
	for (int i =2; i<= x/2; i++){
		//if divisible by any number break out of loop, we know not prime
		if(x%i == 0) {
			y = 0;
			break;
		}
	}
	if(y==0){
		//not prime
		return 0; 
	}
	else {
		//prime
		return 1;
	}
}



