#include <stdio.h>

int main(){
	unsigned long long a;
	int i;
	scanf("%ull", &a);
	for(i=0;i<10;i++){
		printf("%d\n", a%10);
		a /= 10;
	} 
}
