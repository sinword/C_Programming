#include <stdio.h>

void fact_calc(int n){
  int ans = 1;
  int len = 1;
  for(int i=1;i<=n;i++){
    ans *= i;
  }
  int temp = ans;
  while(temp / 10){
    len++;
    temp /= 10;
  }
  for(int i=0;i<4;i++){
    printf("*");
  }
  for(int i=1;i<=2*n;i++){
    printf("*");
  }
  for(int i=1;i<=len+1;i++){
    printf("*");
  }
  if(n == 0){
    printf("\n*%d!", n);
  }
  else{
    printf("\n*%d!=%d", n, n);
    for(int i=n-1;i>=1;i--){
      printf("x%d", i);
    }
  }
  printf("=%d*\n", ans);
  for(int i=0;i<4;i++){
    printf("*");
  }
  for(int i=1;i<=2*n;i++){
    printf("*");
  }
  for(int i=1;i<=len+1;i++){
    printf("*");
  }
  puts("");
}

int main(){
  int n;
  printf("Enter an integer between 0 to 9 or -1 to quit => ");
  scanf("%d", &n);
  while(n != -1){
    if(n >= 0 && n <= 9){
      fact_calc(n);
    }
    else{
      printf("Invalid entry\n");
    }
    scanf("%d", &n);
  }
}
