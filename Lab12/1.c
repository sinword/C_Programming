#include <stdio.h>
#include <string.h>

void stringReverse(char a[], int n){
  if(n >= 0){
    printf("%c", a[n]);
    stringReverse(a, n-1);
  }
}

int main(){
  char *a;
  int n;
  scanf("%s", a);
  n = strlen(a);
  //printf("%d", n);
  stringReverse(a, n-1);
}
