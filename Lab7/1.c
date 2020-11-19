#include <stdio.h>
#include <time.h>

int tossing(int k){
	if(k%2 == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	int head = 0, tail = 0;
	int i;
	srand(time(NULL));
	for(i = 0;i < 1000;i++){
		int test = tossing(rand());
		if(test == 0){
			tail++;
		}
		else{
			head++;
		}
	}
	printf("Head: %d\n", head);
	printf("tail: %d", tail);
}
