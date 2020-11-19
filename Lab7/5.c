#include <stdio.h>

unsigned long long int f(unsigned long long int n){
	unsigned long long int num[2]={0,1};
	unsigned long long int temp;
	unsigned long long int i;
	if(n == 0 || n == 1){
		return num[n];
	}
	else{
		for(i = 2;i <= n;i++){
			temp = num[0] + num[1];
			num[0] = num[1];
			num[1] = temp;
		}
		return temp;
	}
}
//18446744073709551615


int main(){
	unsigned long long int n;
	while(1){
		scanf("%llu", &n);
		unsigned long long int result = f(n);
		printf("Result is %llu.\n", result);
	}
}
