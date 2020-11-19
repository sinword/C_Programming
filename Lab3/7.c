#include <stdio.h>
#include <stdlib.h>

int main(){
	int p;
	printf("Enter your password: ");
	scanf("%d",&p);
	int np = 0;
	int i;
	printf("%d", ((p%100)/10+7)%10);
	printf("%d", ((p%1000)+7)%10);
	printf("%d", (p/1000+7)%10);
	printf("%d", ((p%1000)/100+7)%10);
}
