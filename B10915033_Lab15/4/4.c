#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));
	int i, tp = 0, hp = 0;
	int j;
	printf("BANG!!!\nAND THEY'RE OFF!!!!!\n\n");
	while(tp <= 70 && hp <= 70){
		i = rand() % 10 + 1;
		printf("Tortoise: ");
		if(1 <= i && i <= 5){
			printf("fast plod");
			tp += 3;
		}
		else{
			if(6 <= i && i <= 7){
				printf("slip");
				tp -= 6;
			}
			else{
				printf("slow plod");
				tp += 1;
			}
		}
		if(tp < 1){
			tp = 1;
		}
		printf(", %d\n", tp);
		
		
		printf("Hare: ");
		if(1 <= i && i <= 2){
			printf("sleep");
		}
		else{
			if(3 <= i && i <= 4){
				printf("big hop");
				hp += 9;
			}
			else{
				if(i == 5){
					printf("big slip");
					hp -= 12;
				}
				else{
					if(6 <= i && i <= 8){
						printf("small hop");
						hp += 1;
					}
					else{
						printf("small slip");
						hp -= 2;
					}
				}
			}
		}
		if(hp < 1){
			hp = 1;
		}
		printf(", %d\n", hp);
		
		if(tp > hp){
			for(j=1;j<hp;j++){
				printf(" ");
			}
			printf("H");
			for(j=hp+1;j<tp;j++){
				printf(" ");
			}
			printf("T\n\n");
		}
		else{
			if(tp < hp){
				for(j=1;j<tp;j++){
					printf(" ");
				}
				printf("T");
				for(j=tp+1;j<hp;j++){
					printf(" ");
				}
				printf("H\n\n");
			}
			else{
				for(j=0;j<hp;j++){
					printf(" ");
				}
				printf("OUCH\n");
			}
		}	
	}
	if(tp >= 70){
		printf("TORTOISE WINS!!! YAY!!!");
	}
	else{
		printf("HARE WINS!!! YAY!!!");
	}
}
