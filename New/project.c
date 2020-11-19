#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int guess;
  char a;
  char play = 'y';
  while(play == 'y'){
    srand(time(NULL));
    int answer = rand() % 1000+1;
    printf("Guess a number between 1 and 1000: ");
    scanf("%d", &guess);
    while(guess != answer){
      if(guess > answer){
        printf("Too high!\n");
      }
      else{
        printf("Too low\n");
      }
      fflush(stdin);
      scanf("%d", &guess);
    }
    printf("Excellent! You guessed the number.\nWould you like to play again (y or n)?");
    fflush(stdin);
    scanf("%c", &play);
  }
}
