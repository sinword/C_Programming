#include <stdio.h>

int main(){
	float p0[2], p1[2], p2[2];
	printf("Enter the coordinate (x, y) for p0:");
	scanf("%f%f", &p0[0], &p0[1]);
	printf("Enter the coordinate (x, y) for p1:");
	scanf("%f%f", &p1[0], &p1[1]);
	printf("Enter the coordinate (x, y) for p2:");
	scanf("%f%f", &p2[0], &p2[1]);
	float k = (p1[0]-p0[0]) * (p2[1]-p0[1]) - (p2[0]-p0[0]) * (p1[1]-p0[1]);
	if(k>0){
		printf("(%.1f, %.1f) is on the left side of the line from (%.1f, %.1f) to (%.1f, %.1f)", p2[0],p2[1],p0[0],p0[1],p1[0],p1[1]);
	}
	else if(k<0){
		printf("(%.1f, %.1f) is on the right side of the line from (%.1f, %.1f) to (%.1f, %.1f)", p2[0],p2[1],p0[0],p0[1],p1[0],p1[1]);
	}
	else{
		printf("(%.1f, %.1f) is on the line from (%.1f, %.1f) to (%.1f, %.1f)", p2[0],p2[1],p0[0],p0[1],p1[0],p1[1]);
	}
}
