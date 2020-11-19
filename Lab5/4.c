#include <stdio.h>
#include <math.h>

int main(){
	double i;
	double sum = 0;
	for(i=1;i<=999;i++){
		sum += 1.0/(pow(i,0.5)+pow(i+1,0.5));
	}
	printf("%lf", sum);
}
