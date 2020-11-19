#include<stdio.h>

int main(){
	int n;
	int k = 2;
	scanf("%d", &n);
	while(n > 1){
		if(n%k==0){
			printf("%d", k);
			n/=k;
			if(n!=1){
				printf(", ");
			}
		}
		else{
			k++;
		}
	}
}
