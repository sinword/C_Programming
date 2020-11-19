#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int mul(){
  int a = rand()%9+1;
  int b = rand()%9+1;
  printf("How much is %d times %d?\n", a, b);
  return a*b;
}

int main(){
    srand(time(NULL));
    while(1){
      int ans = mul();
      int n;
      scanf("%d", &n);
      while(ans != n){
        printf("Please try again.\n");
        scanf("%d", &n);
      }
      printf("Very nice!\n");
    }
}
