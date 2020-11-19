#include <stdio.h>

int main(){
	int num;
	while(1){
		printf("Enter a number: ");
		scanf("%d", &num);
		if(num & 1){
			printf("ODD\n");
		}
		else{
			printf("EVEN\n");
		}
	}
}
