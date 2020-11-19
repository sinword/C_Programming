#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	while(1){
		float x1,x2,y1,y2,r1,r2;
		printf("Enter circle1's center x-, y-coordinates, and radius: ");
		scanf("%f%f%f",&x1,&y1,&r1);
		printf("Enter circle2's center x-, y-coordinates, and radius: ");
		scanf("%f%f%f",&x2,&y2,&r2);
		float d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		if(d<=r1-r2){
			printf("Circle2 is inside circle1.\n");
		}
		if(d<=r1+r2){
			printf("Circle2 is overlap circle1.\n");
		}
		if(d>r1+r2){
			printf("Circle2 does not overlap circle1.\n");
		}
	}
}
