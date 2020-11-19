#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a[3];
	int i,k;
	for(i=0;i<3;i++){
		scanf("%d", &a[i]);
	}

	for(i=0;i<2;i++){
		for(k=i+1;k<3;k++){
			if(a[i] > a[k]){
				int temp = a[k];
				a[k] = a[i];
				a[i] = temp;
			}
		}
	}
	if(a[0]+a[1] > a[2]){
		printf("These number can build a triangle.\n");
	}
	else{
		printf("These number can not build a triangle.\n");		
	}
}
