#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[3];
	printf("Enter three different integers: ");
	scanf("%d%d%d", &num[0], &num[1], &num[2]);
	for(int i=0;i<3;i++){
		for(int k=i+1;k<3;k++){
			if(num[i]<num[k]){
				int temp = num[k];
				num[k] = num[i];
				num[i] = temp;
			}
		}
	}
	printf("Sum is %d\n", num[0]+num[1]+num[2]);
	printf("Average is %d\n", (num[0]+num[1]+num[2])/3);
	printf("Product is %d\n", num[0]*num[1]*num[2]);
	printf("Smallest is %d\n", num[2]);
	printf("Largest is %d\n", num[0]);
} 
