#include <stdio.h>
#include <stdlib.h>

int main(){
	int k;
	int count = 2;
	scanf("%d", &k);
	int temp = k/2;
	int i;
	for(i=2;i<temp;i++){
		if(k%i == 0){
			count++;
			printf("Not a prime number\n");
			break;
		}
	}
	if(count == 2){
		printf("It's a prime number\n");
	}
} 
