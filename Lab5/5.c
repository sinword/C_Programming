#include <stdio.h>

int main(){
	int i;
	int k;
	int count = 0;
	for(i=1;i<=7;i++){
		for(k=i+1;k<=7;k++){
			printf("%d %d", i, k);
			printf("\n");
			count ++;
		}
		
	}
	printf("Total number of combination is %d.", count);
}
