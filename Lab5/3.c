#include <stdio.h>

int main(){
	int n;
	int k;
	int i;
	scanf("%d", &n);
	for(k=n;k>=1;k--){
		for(i=k;i>=1;i--){
			printf("%d", i);
		}
		for(i=2;i<=k;i++){
			printf("%d", i);
		}
		printf("\n");	
	}
	
}
