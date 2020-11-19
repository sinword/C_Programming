#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int mul(){
  int a = rand()%9+1;
  int b = rand()%9+1;
  printf("How much is %d times %d?\n", a, b);
  return a*b;
}

void c(int y){
  switch(y){
    case 0:
      printf("Very good!\n");
      break;
    case 1:
      printf("Excellent!\n");
      break;
    case 2:
      printf("Nice work!\n");
      break;
    case 3:
      printf("keep up the work!\n");
      break;
  }
}

void w(int x){
  switch(x){
    case 0:
      printf("No. Please try again.\n");
      break;
    case 1:
      printf("Wrong. Try once more.\n");
      break;
    case 2:
      printf("Don’t give up.\n");
      break;
    case 3:
      printf("No. Keep trying\n");
      break;
  }
}
int main(){
  srand(time(NULL));
  int count = 0;
  int right = 0;
  while(1){
    int ans = mul();
    int n;
    scanf("%d", &n);
    while(ans != n){
      w(rand()%4);
      scanf("%d", &n);
      count++;
    }
    if(ans == n){
      c(rand()%4);
      right++;
      count++;
    }
    if(count >= 10){
      if((double)right/count < 0.75){
        printf("You nned to ask your teacher for extra help.\n");
      }
      else{
        printf("Congratulation, you are ready to the next level.\n");
      }
    }
  }
}
