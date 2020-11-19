#include <stdio.h>
#include <math.h>

double ns(double x, double y){
	double k = x/y;
	double ny = (k+y)/2;
	while(fabs(ny-y)<0.00001*y){
		return ny;
	}
	return ns(x,ny);
}

int main(){
	double x, y=1.0;
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	printf("Square root:");
	printf("%lf", ns(x, y));
}
