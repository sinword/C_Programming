#include <stdio.h>

int main(){
	int i,k;
	for(k=2;k<=1000;k++){
		int count=0;
		for(i=1;i<=k;i++){
			if(k%i == 0){
				count++;
			}
		}
		if(count==2){
			printf("%d\n",k);
		}
	}
}
