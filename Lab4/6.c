#include <stdio.h>

int main(){
	int i,k;
	for(i=1;i<=500;i++){
		for(k=i;k<=500;k++){
			double temp = pow(pow(i,2)+pow(k,2),0.5);
			if( temp <= 500 && (int)(temp) == temp){
				printf("%d, %d, %.0lf\n",i,k,temp);
			}
		}
	}
}
