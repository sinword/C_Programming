#include <stdio.h>

int main(){
	int i,k;
	for(i=1;i<=10;i++){
		for(k=1;k<=i;k++){
			printf("%s", "*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=10;i>=1;i--){
		for(k=1;k<=i;k++){
			printf("%s", "*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=10;i>=1;i--){
		for(k=10;k>i;k--){
			printf("%s", " ");
		}
		for(k=1;k<=i;k++){
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=10;i++){
		for(k=i;k<10;k++){
			printf("%s", " ");
		}
		for(k=1;k<=i;k++){
			printf("%s", "*");
		}
		printf("\n");
	}
} 
