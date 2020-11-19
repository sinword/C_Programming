#include <stdio.h>

int main(){
	int i,k;
	int num[5];
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<5;i++){
		for(k=0;k<num[i];k++){
			printf("*");
		}
		printf("\n");
	}	
}
