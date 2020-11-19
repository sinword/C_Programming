#include <stdio.h>
#include <time.h>

int main(){
	while(1){
		int guess;
		char play;
		srand(time(NULL));
		int answer = rand() % 1000 + 1;
		puts("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.");
		scanf("%d", &guess);
		while(guess != answer){
			if(guess > answer){
				puts("Too high! Try again.");
			}
			else{
				puts("Too low! Try again.");
			}
			scanf("%d", &guess);
		}
		printf("Excellent! You guessed the number.\nWould you like to play again? (y or n)");
		scanf("%c", &play);
		if(play == '\n'){
			scanf("%c", &play);
		}
		if(play == 'n'){
			break;
		}
	}
}
