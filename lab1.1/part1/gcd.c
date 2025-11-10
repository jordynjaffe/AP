#include "gcd.h"

int gcd(int x, int y){
	if(x!=0 && y!=0){
		while (y>0) {
			int remain = x%y;
			x = y;
			y = remain;
		}
		if (x==0){
			return y;
		}
		if(y==0){
			return x;
		}
	}
	return 0;
}
