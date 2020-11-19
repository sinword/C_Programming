#include <stdio.h>

int main(){
	int num1, num2;
	while(1){
		printf("Enter two number: ");
		scanf("%d%d", &num1, &num2);
		if(num1%num2 == 0){
			printf("The first number is a multiple of second number.\n");
		}
		else{
			printf("The first number is not a multiple of second number.\n");
		}
	}	
}
