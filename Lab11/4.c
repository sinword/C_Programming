#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

char *suit[4] = {"Club", "Diamond", "Heart", "Spade"};
char *face[13] = {
  "Ace", "Deuce", "Three", "Four",
  "Five", "Six", "Seven", "Eight",
  "Nine", "Ten", "Jack", "Queen", "King"
};

int ranking(int hand[]){
  int num[13] = {0};
  int f[4] = {0};
  int pair = 0, kind3 = 0, kind4 = 0, flush = 0, straight = 1, straightflush = 1;
  int index = 0;
  for(int i=0;i<5;i++){
    num[abs(hand[i] - 1) % 13]++;
    f[(hand[i]-1) / 13]++;
  }
  /*puts("");
  for(int i=0;i<13;i++){
    printf("%d", num[i]);
  }
  puts("");
  for(int i=0;i<4;i++){
    printf("%d", f[i]);
  }
  puts("");*/
  for(int i=0;i<13;i++){
    if(num[i] == 2) pair++;
    if(num[i] == 3) kind3++;
    if(num[i] == 4) kind4++;
  }
  while(!num[index])index++;
  while(num[++index] == 1)straight++;
  index = 0;
  for(int i=0;i<4;i++){
    if(f[i] == 5) {
      flush++;
      while(!num[index])index++;
      while(num[++index] == 1)straightflush++;
    }
  }
  if(pair == 2){puts("Two pair\n");return 7;}
  if(kind3 == 1 && pair == 1) {
    puts("Full house\n");
    return 3;
  }
  else{
    if(pair == 1){puts("One pair\n");return 8;}
    if(kind3 == 1){puts("Three of a kind\n");return 6;}
  }
  if(kind4 == 1){puts("Four of a kind\n");return 2;}
  if(flush == 5){
    if(straightflush == 5){
      puts("Straight flush\n");
      return 1;
    }
    else{
      puts("Flush\n");
      return 4;
    }
  }
  if(straight == 5){
    puts("Straight");
    return 5;
  }
  puts("High card");
  return 9;
}

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
//數字 hand[i] - 1 % 13
//花色 (hand[i] - 1) / 13


int main(){
  int deck[4][13];
  int hand[5];
  srand(time(NULL));
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      deck[i][j] = i * 13 + j + 1;
    }
  }
  shuffle(deck);
  shuffle(deck);
  shuffle(deck);
  puts("The hand of player1:\n");
  for(int i=0;i<5;i++){
    hand[i] = deck[0][i];
    //printf("%d\t", hand[i]);
    printf("%s of %s\n", face[abs(hand[i]-1)%13], suit[(hand[i]-1) / 13]);//數字 - 花色
    //printf("%d - %d\n", abs(hand[i]-1)%13, (hand[i]-1)/13);
  }
  puts("");
  int score1 = ranking(hand);

  puts("");
  shuffle(deck);
  shuffle(deck);
  shuffle(deck);
  puts("The hand of player2:\n");
  for(int i=0;i<5;i++){
    hand[i] = deck[0][i];
    //printf("%d\t", hand[i]);
    printf("%s of %s\n", face[abs(hand[i]-1)%13], suit[(hand[i]-1) / 13]);//數字 - 花色
    //printf("%d - %d\n", abs(hand[i]-1)%13, (hand[i]-1)/13);
  }
  puts("");
  int score2 = ranking(hand);
  puts("");
  if(score1 > score2){
    puts("Player2 won.");
  }
  else{
    if(score1 < score2){
      puts("Player1 won.");
    }
    else{
      puts("Even");
    }
  }
}
