#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i;
	for(i=100;i<=999;i++){
		int sum=0;
		int k = i;
		sum += (k%10) *(k%10) * (k%10);
		k/=10;
		sum +=(k%10) * (k%10) * (k%10);
		k/=10;
		sum += k *k * k;
		if(sum == i){
			printf("%d\n", i);
		}
	}
}
