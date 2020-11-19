#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float x, y;
	printf("Enter a point with x and y coordinates: ");
	scanf("%f%f", &x, &y);
	float s =  10000;
	float a = (abs((0-x)*(100-y) - (0-x)*(0-y))/2) + (abs((200-x)*(100-y) - (0-x)*(0-y))/2) + (abs((200-x)*(0-y) - (0-x)*(0-y))/2);
	//f(x,y,0,0,0,100) + f(x,y,200,0,0,100) + f(x,y,200,0,0,0)
	if(a==s){
		printf("The point is in the triangle\n");
	}
	if(a>s){
		printf("The point is not in the triangle\n");
	}
}
