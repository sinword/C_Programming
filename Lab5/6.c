#include <stdio.h>

int main(){
	int k;
	int max = 0;
	int max_count = 0;
	scanf("%d", &k);
	while(k != 0){
		if(k == max){
			max_count++;
		}
		if(k > max){
			max = k;
			max_count=1;
		}
		scanf("%d", &k);
	}
	printf("The occurrence count for %d is %d.", max, max_count);
}
