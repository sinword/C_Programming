#include <stdio.h>

unsigned long long int f(int val){
	unsigned long long int num[2]={0,1};
	unsigned long long int temp;
	unsigned long long int i;

	for(i = 2;i<=val;i++){
		temp = num[0] + num[1];
		num[0] = num[1];
		num[1] = temp;
	}
	return temp;
}
//18446744073709551615

int limit(){
	int val = 1;
	while(1){
		if(18446744073709551615 - f(val) <= f(val-1)){
			break;
		}
		val++;
	}
	return val;
}
int main(){
	printf("Result is %llu.\n", limit());
}
