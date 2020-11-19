#include <stdio.h>

int judge(int* a){
	int i,k;
		for(i=0;i<2;i++){
		for(k=1;k<3;k++){
			if(a[i]>a[k]){
				int temp = a[i];
				a[i] = a[k];
				a[k] = temp;
			}
		}
	}
	if(pow(a[0],2) + pow(a[1],2) == pow(a[2],2)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int a[3];

	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	printf("%d",judge(a));
}
