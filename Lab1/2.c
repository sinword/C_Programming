#include <stdio.h>

int main(){
	int time;
	printf("Enter the time: ");
	scanf("%d", &time);
	int hour, minute, second;
	printf("%d hour(s), %d minute(s), %d secend(s).", time/3600, (time/60)%60, (time%3600)%60);
}
