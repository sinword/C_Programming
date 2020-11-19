#include <stdio.h>

int main(){
	int year, month, day;
	printf("Enter year:");
	scanf("%d", &year);
	printf("Enter month (1-12):");
	scanf("%d",&month);
	printf("Enter the day of the month (1-31):");
	scanf("%d", &day);
	if(month == 1 || month == 2){
		month += 12;
		year -= 1;	
	}
	int h = (day+26*(month+1)/10 + year%100 + (year%100)/4+ 5*(year/100) + (year/100)/4)%7;
	printf("Day of the week is ");
	if(h==1){printf("Sunday\n");}
	if(h==0){printf("Saturday\n");}
	if(h==6){printf("Friday\n");}
	if(h==5){printf("Thursday\n");}
	if(h==4){printf("Wendesday\n");}
	if(h==3){printf("Tuesday\n");}
	if(h==2){printf("Monday\n");}
}
