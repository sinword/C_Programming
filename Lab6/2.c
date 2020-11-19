#include <stdio.h>
#include <math.h>

int discriminant(double a, double b, double c){
	double r1,r2;
	if(pow(b,2) - 4*a*c > 0){
		printf("There are two true roots.\n");
		r1 = (-b + sqrt(b*b - 4*a*c))/2/a;
		r2 = (-b - sqrt(b*b - 4*a*c))/2/a;
		printf("%.2lf, %.2lf", r1, r2);
		return 0;
	}
	else if(pow(b,2) - 4*a*c == 0){
		printf("There is one true roots.\n");
		r1 = (-b + sqrt(b*b - 4*a*c))/2/a;
		printf("%.2lf, %.2lf", r1, r1);
		return 0;
	}
	else{
		printf("There is no true root\n");
		return 0;
	}
}

int main(){
	double a,b,c;
	puts("Enter a, b, and c:");
	scanf("%lf%lf%lf", &a,&b,&c);
	discriminant(a,b,c);
}
