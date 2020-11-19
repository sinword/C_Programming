#include <stdio.h>

int same(int k,int a[]){
  for(int i=0;i<5;i++){
    if(k == a[i]){
      return k;
    }
  }
  return 0;
}

int main(){
  int a[5];
  int b[5];
  for(int i=0;i<5;i++){
    scanf("%d", &a[i]);
  }
  for(int i=0;i<5;i++){
    scanf("%d", &b[i]);
  }
  for(int i=0;i<5;i++){
    for(int k=0;k<5;k++){
      if(b[i] == a[k]){
        printf("%d ", b[i]);
      }
    }
  }
}
