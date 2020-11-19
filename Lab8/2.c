#include <stdio.h>

int isPrime(int n, int m){
  if(m > 1){
    if(n%m == 0){
      return 1;
    }
    else{
      isPrime(n, m-1);
    }
  }
  else{
    return -1;
  }
}

int main(){
  int n;
  while(1){
    scanf("%d", &n);
    int result = isPrime(n, n-1);
    if(result == -1){
      printf("It is a prime.\n");
    }
    else{
      printf("Not a prime.\n");
    }
  }

}
