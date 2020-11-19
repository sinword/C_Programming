#include <stdio.h>

int iseven(int a){
	if(a%2 != 0){
		printf("%d\n",0);
	}
	else{
		printf("%d\n",1);
	}
}
int main(){
	int a;
	scanf("%d", &a);
	while(a != 0){
		iseven(a);
		scanf("%d", &a);
	}
}
