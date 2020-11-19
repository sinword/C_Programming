#include <stdio.h>

int main(){
	double v, a;
	while(1){
		printf("Enter speed and acceleration: ");
		scanf("%lf%lf", &v, &a);
		printf("The minimum runway length for this airplane is %0.3lf meters.\n", v*v/2/a);
	}
} 
