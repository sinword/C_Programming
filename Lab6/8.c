#include <stdio.h>
#include <math.h>

int main(){
	unsigned int p=1;
	int i;
	printf("p   2^p-1\n");
	for(p=2;p<32;p++){
		int k=0;
		unsigned int num =  pow(2,p)-1;
		for(i=2;i<sqrt(num);i++){
			if(num%i == 0){
				k++;
			}
		}
		if(k==0){
			printf("%2d  %u\n", p,num);
		}
	}
}
