#include <stdio.h>
#include <stdlib.h>

int main(){
	double n;
	printf("Enter sales in dollars (-1 to end): ");
	scanf("%lf",&n);
	while(n != -1){
		n = 0.09*n + 200;
		printf("Salary is: %.2lf\n", n);
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%lf", &n);
	}
} 
