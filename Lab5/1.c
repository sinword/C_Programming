#include<stdio.h>
#include <stdlib.h> 
#include <math.h>

int main(){
	int n = 1;
	while(pow(n, 3) <= 12000){
		n++;
	}
	printf("%d", n);
}
