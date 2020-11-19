#include <stdio.h>

int main(){
  int n;
  while(1){
    scanf("%d", &n);
    int temp = n;
    int factor[n+1];
    for(int i=0;i<=n;i++){
      factor[i] = 0;
    }
    int k = 2;
    while(n > 1){
      if(n%k==0){
        factor[k]++;
        n /= k;
      }
      else{
        k++;
      }
    }
    int count = 0;
    for(int i=1;i<=temp;i++){
      if(factor[i] >= 2){
        if(count == 1){
          printf(" * ");
        }
        count = 1;
        printf("%d^%d", i, factor[i]);
      }
      if(factor[i] == 1){
        if(count == 1){
          printf(" * ");
        }
        else{
          count = 1;
        }
        printf("%d", i);
      }
    }
    puts("");
  }
}
