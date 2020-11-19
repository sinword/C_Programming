#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[10];
	scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	int i,k;
	for(i=0;i<9;i++){
		for(k=i+1;k<10;k++){
			if(a[i] > a[k]){
				int temp = a[k];
				a[k] = a[i];
				a[i] = temp;
			}
		}
	}
	printf("%d, %d", a[9],a[8]);
} 
