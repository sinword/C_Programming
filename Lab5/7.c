#include <stdio.h>
#include <stdlib.h>

int emirp(int i){
	int temp = 0;
	int p = i;
	while(i != 0){
		temp = 10*temp + i%10;
		i/=10; 
	}
	if(p!=temp && prime_number(temp) == 1){
		return 1;
	}
	else{return 0;
	}
}

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

int main() {
	int i;
	int count = 0;
	for(i=10;;i++){
		if(prime_number(i) == 1){
			if(emirp(i) == 1){
				printf("%d ", i);
				count++;
				if(count == 120){break;}
				if(count%10 == 0){
					printf("\n");
				}
			}	
		}
	}
} 
