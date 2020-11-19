#include <stdio.h>

long combination(long n, long p, long result){
  if(p == 0 || p == n){
    return 1;
  }
  else{
    return combination(n-1, p, result) + combination(n-1, p-1, result);
  }
}

int main(){
  long n, m;
  while(1){
    scanf("%ld %ld", &n, &m);
    long c = combination(n, m, 0);
    printf("%ld", c);
  }
}
