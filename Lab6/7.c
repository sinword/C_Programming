#include <stdio.h>

int isperfect(int i){
	int k;
	int sum = 0;
	for(k=1;k<i;k++){
		if(i%k == 0){
			sum += k;
		}
	}
	if(sum == i){
		printf("%d", 1);
		for(k=2;k<i;k++){
			if(i%k == 0){
				printf("+%d", k);
			}
		}
		printf(" = %d\n", sum);
	}
}

int main(){
	int i;
	for(i=2;i<=1000;i++){
		isperfect(i);	
	}
}
