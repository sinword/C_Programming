#include <stdio.h>
#include <stdlib.h>

int main(){
	int hour;
	double pay;
	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &hour);
	while(hour != -1){
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%lf", &pay);
		if(hour > 40){
			printf("Salary is $%.2lf\n", pay*40 + (hour - 40)*1.5*pay);
		} 
		else{
			printf("Salary is $%.2lf\n", pay*hour);
		}
		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d", &hour);
	}
} 
