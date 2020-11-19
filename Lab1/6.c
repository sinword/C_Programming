#include <stdio.h>

int main(){
	double dd, mg, pg;
	printf("Enter the driving distance: ");
	scanf("%lf", &dd);
	printf("Enter miles per gallon: ");
	scanf("%lf", &mg);
	printf("Enter price per gallon: ");
	scanf("%lf", &pg);
	printf("The cost of driving is $%0.2lf.\n", dd/mg*pg);
}
