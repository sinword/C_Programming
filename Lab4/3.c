#include <stdio.h>

int main(){
	int a,i;
	int k;

	double total=0;
	for(i=0;i<5;i++){
		int q=0,b;
		scanf("%d",&a);
		for(k=1;k<=7;k++){
			scanf("%d", &b);
			q += b; 
		} 
		switch(a){
			case 1:
				total += q*2.98;
				break;
			case 2:
				total += q*4.5;
				break;
			case 3:
				total += q*9.98;
				break;
			case 4:
				total += q*4.49;
				break;
			case 5:
				total += q*6.87;
				break;
		}
	}
	printf("%.2lf", total);
}
