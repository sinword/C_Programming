#include <stdio.h>

int lcm(int a, int b){
	int k;
	if(a > b){
		k = a;
	}
	else{
		k = b;
	}
	int i = b;
	for(;;i++){
		if(i%a == 0 && i%b == 0){
			return i;
		}
	}
}

int main(){
	int a, b;
	printf("Enter two integer: ");
	scanf("%d %d", &a, &b);
	int result = lcm(a,b);
	printf("%d", result);
}
