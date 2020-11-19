#include <stdio.h>

int getPentagonalNumber(int n){
	return n*(3*n-1)/2;
}

int main(){
	int i;
	for(i=1;i<=100;i++){
		printf("%7d ", getPentagonalNumber(i));
		if(i%10 == 0){
			printf("\n");
		}
	}
}
