#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bean_machine(int *drop, int ball, int slot){
  int temp;
  for(int k=0;k<ball;k++){
    for(int i=0;i<slot-1;i++){
      temp = rand() % 2;
      if(temp){
        printf("R");
        drop[k]++;
      }
      else{
        printf("L");
        drop[k]--;
      }
    }
    if(drop[k] > 7){
      drop[k] = 7;
    }
    if(drop[k] < 0){
      drop[k] = 0;
    }
    //printf("%d", drop[k]);
    printf("\n");
  }
}

int main(){
  srand(time(NULL));
  int ball, slot;
  printf("Enter the number of balls to drop: ");
  scanf("%d", &ball);
  printf("Enter the number of slot in bean machine: ");
  scanf("%d", &slot);
  int drop[ball];
  for(int i=0;i<ball;i++){
    drop[i] = slot/2+1;
  }
  bean_machine(&drop, ball, slot);
  int result[slot];
  for(int i=0;i<slot;i++){
    result[i] = 0;
    for(int k=0;k<ball;k++){
      if(drop[k] == i){
        result[i]++;
      }
    }
    //printf("%d", result[i]);
  }
  //puts("");
  for(int i=ball;i>=1;i--){
    for(int k=0;k<slot;k++){
      if(result[k] >= i){
        printf("o");
      }
      else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
