#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int cal(int math){
  int a = rand()%9+1;
  int b = rand()%9+1;
  int x = rand()%3+1;
  switch(math){
    case 1:
      printf("How much is %d plus %d?\n", a, b);
      return a+b;
      break;
    case 2:
      printf("How much is %d minus %d?\n", a, b);
      return a-b;
      break;
    case 3:
      printf("How much is %d times %d?\n", a, b);
      return a*b;
    case 4:
      return cal(x);
      break;
  }
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
    int math;
    scanf("%d", &math);
    while(1){
      int ans = cal(math);
      int n;
      scanf("%d", &n);
      while(ans != n){
        w(rand()%4);
        scanf("%d", &n);
      }
      c(rand()%4);
    }
}
