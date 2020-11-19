#include <stdio.h>
#include <math.h>

int main(){
	int i,k,m;

	for(m=1;m<=10;m++){
		double pi=0;
		for(k=1;k<=m*10000;k++){
		pi += 4*pow((-1),k+1)/(2*k-1);
		}
	printf("%lf\n",pi);
	}
	
} 
