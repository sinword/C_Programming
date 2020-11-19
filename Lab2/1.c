#include <stdio.h> 

int main(){
	float er, amount, a;
	int convert;
	printf("Enter the exchange rate from USD to NTD: ");
	scanf("%f", &er);
	printf("Enter 0 to convert USD to NTD and 1 vice versa: ");
	scanf("%d", &convert);
	
	if(convert == 0){
		printf("Enter the USD amount: ");
		scanf("%f", &amount);
		printf("$%.1f USD is %.0f NTD.\n",amount,amount*er);
	}
	else{
		printf("Enter the NTD amount: ");
		scanf("%f", &amount);
		printf("$%.1f NTD is %.1f USD.\n",amount, amount/er);
	}
	
	
}
