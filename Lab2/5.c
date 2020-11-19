#include <stdio.h>

int main(){
	float w, h, bmi;
	printf("weight in kilograms:");
	scanf("%f", &w);
	printf("height in meters:");
	scanf("%f", &h);
	bmi = w/h/h;
	printf("%.1f\n", bmi);
	if(bmi<18.5){
		printf("Underweight\n");
	}
	else if(bmi<24.9){
		printf("Normal\n");
		
	}
	else if(bmi<29.9){
		printf("Overweight\n");
	} 
	else if(bmi<30){
		printf("obese\n");
	}  
}
