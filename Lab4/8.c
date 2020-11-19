#include <stdio.h>

int main(){
	int i,k;
	int f = 0;

	for(k=2;;k++){
		int count=0;
		int temp1=0;
		int temp2=k;
		while(temp2 > 0){
			temp1=temp2%10+temp1*10;
			temp2 /= 10;
		}
			
		if(temp1 == k){
			for(i=1;i<=k;i++){
				if(k%i == 0){
					count++;
				}
			}
			if(count == 2){ 
				printf("%d ", k);
				f++;
				if(f%10==0){
					printf("\n");
				}
			} 
		}
			
		if(f == 120){break;}
	}
}


