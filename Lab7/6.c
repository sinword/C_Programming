#include <stdio.h>
#include <time.h>

int rolldice(){
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sum = dice1 + dice2;
	return sum;
}

int main(){
	int bb = 1000;
	while(bb > 0){
		int wager;
		int point;
		printf("Please enter your wager: ");
		scanf("%d", &wager);
		while(wager > bb){
			printf("Please enter a valid wager.\n");
			scanf("%d", &wager);
		}
		srand(time(NULL));
		int sum = rolldice();
		if(sum == 11 || sum == 7){
			printf("You won!\n");
			bb += wager;
			printf("Bankbalace is %d\n", bb);
		}
		else if(sum == 2 || sum == 3 || sum == 12){
			printf("You lose!\n");
			bb -= wager;
			printf("Bankbalace is %d\n", bb);
		}
		else{
			point = sum;
			int k = 1;
			while(k == 1){	
				int d = rolldice();
				if(d	 == 7){
					printf("You lose!\n");
					bb -= wager;
					printf("Bankbalace is %d\n", bb);
					k = 0;
				}
				else if(point == d){
					printf("You won!\n");
					bb += wager;
					printf("Bankbalace is %d\n", bb);
					k = 0;
				}
			}
		}
	}

	printf("Sorry, you busted!");
}
