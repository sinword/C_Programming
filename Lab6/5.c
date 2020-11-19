#include <stdio.h>

int reverse(int number){
	int k = 0;
	int temp = number;
	while(temp >= 10){
		k = temp%10 + 10*k;
		temp /= 10;
	}
	if(number % 10 == 0 && number != 0){
		printf("%d",0);
	}
	return k;
}

int main(){
	int number;
	scanf("%d",&number);
	printf("%d", reverse(number));
}
