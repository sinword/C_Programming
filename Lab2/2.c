#include <stdio.h>

int main(){
	int a, sum;
	printf("Input: ");
	scanf("%d", &a);
	while(a>0){
		sum += a%10;
		a /= 10;
	}
	printf("Output: The sum of the digits is %d\n", sum);
} 
