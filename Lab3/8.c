#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int p;
	printf("Enter your encrypted password: ");
	scanf("%d",&p);
	int np = 0;
	int i;
	i = p%10;
	if(i>=7){
		np += 100 * (i-7);
	} 
	else{
		np += 100*(i+3);
	}
	p/=10;
	i = p%10;
	if(i>=7){
		np += 1000*(i-7);
	} 
	else{
		np += 1000*(i+3);
	}
	p/=10;
	i = p%10;
	if(i>=7){
		np +=i-7;
	}
	else{
		np +=i+3;
	} 
	
	p /= 10;
	i=p;
	if(i>=7){
		np += 10*(i-7);
	} 
	else{
		np += 10*(i+3);
	}
	
	printf("%d", np);
}
