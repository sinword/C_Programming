#include <stdio.h>

int prime_number(int i){
	int c = 0;
	int k;
	for(k=2;k<=i/2;k++){
		if(i%k == 0){
			c++;
			break;
		}
	}
	if(c==1){return 0;
	}
	else{return 1;
	}
}

int main(){
	int i;
	for(i = 3;i<=1200;i++){
		if(prime_number(i) && prime_number(i+2) == 1){
			printf("(%d, %d)\n",i, i+2);
		}
	}
}

