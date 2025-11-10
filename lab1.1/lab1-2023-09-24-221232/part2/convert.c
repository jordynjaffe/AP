#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);

	printf("signed dec:   %d\n", x);

       	printf("unsigned dec: %u\n", x);

       	printf("hex:          %x\n", x);
	
	printf("binary:       ");
	char decToBinary[32];
	for(int i=0; i<32; i++) {
		if(x & (1<<i)) {
		     decToBinary[31 - i] = '1';
		} else {
			decToBinary[31 - i] = '0';
		}
	}
	int tracking =0;
	for(int k =0; k<32; k++){
		printf("%c", decToBinary[k]);
		tracking++;
		if(tracking % 4 ==0) {
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}	

