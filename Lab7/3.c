#include <stdio.h>

int e(int base, int exp){
	if(exp==1){
		return base;
	}
	else{
		return base * e(base, exp-1);
	}
}

int main(){
	int base, exponent;
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter exponent number: ");
	scanf("%d", &exponent);
	int result = e(base, exponent);
	printf("Answer is %d", result);
}
