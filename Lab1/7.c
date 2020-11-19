#include <stdio.h>

int main(){
	double m, it, ft;
	printf("Enter the amount of water in kilograms: ");
	scanf("%lf", &m);
	printf("Enter the initial temperature: ");
	scanf("%lf", &it);
	printf("Enter the final temperature: ");
	scanf("%lf", &ft);
	printf("The energy needed is %0.1lf\n", m*(ft-it)*4184);
} 
