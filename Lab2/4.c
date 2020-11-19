#include <stdio.h> 

int main(){
	char a,b,c,d,e;
	scanf("%c%c%c%c%c", &a,&b,&c,&d,&e);
	if(a==e & b==d){
		printf("palindrome\n");
	}
	else{
		printf("not palindrome\n");
	}
}
