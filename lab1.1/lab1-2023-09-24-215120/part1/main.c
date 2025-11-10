#include <stdio.h>
#include "prime.h"
#include "gcd.h"
int main() {
	int x;
	int y;
	printf("Enter two integers: ");

	scanf("%d %d", &x, &y);
	//return average
	float avg =(float) (x+y)/2;
	printf("The average is: %f\n", avg);
	//test prime numbers
	int test = prime(x);
	if(test==0) {
		printf("%d is not prime\n", x);
	}
	else{
		printf("%d is prime\n", x);
	}
	int test2 = prime(y);
	if(test2==0) {
		printf("%d is not prime\n", y);
	}
	else{
		printf("%d is prime\n", y);
	}
	int test3 = gcd(x,y);
	if(test3 == 1) {
		printf("%d and %d are relatively prime\n", x, y);
	}
	else{
		printf("%d and %d are not relatively prime\n", x, y);
	}
}
