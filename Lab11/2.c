#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void shuffle(int deck[][13]){
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      swap(&deck[i][j], &deck[rand()%4][rand()%13]);
    }
  }
}

int main(){
  int deck[4][13];
  srand(time(NULL));
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      deck[i][j] = i * 13 + j + 1;
    }
  }
  shuffle(deck);
  shuffle(deck);
  shuffle(deck);
  for(int i=1;i<=13;i++){
    printf("\t%d", i);
  }
  for(int i=0;i<4;i++){
    printf("\n%d\t", i+1);
    for(int j=0;j<13;j++){
      printf("%d\t", deck[i][j]);
    }
  }
}
