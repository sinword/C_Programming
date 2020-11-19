#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  char play = 'y';
  int answer = rand()%10 + 1;
  while(play == 'y'){
    printf("Enter a number from 1 to 10: ");
    int guess;
    scanf("%d", &guess);
    fflush(stdin);
    while(guess != answer){
      if(guess > answer){
        printf("TOO HIGH!\n");
      }
      else{
        printf("TOO LOW!\n");
      }
      scanf("%d", &guess);
    }

    printf("Excellent\n");
    printf("Do you want to play again.(y/n)\n");
    fflush(stdin);
    scanf("%c", &play);
    if(play == 'n'){
      break;
    }
  }
}
