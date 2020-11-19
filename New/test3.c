#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char a[4];
  scanf("%s", a);
  for(int i=0;i<4;i++){
    printf("%c", a[i]);
  }
  puts("");
  printf("%s", a);
  puts("");
  //scanf("%s", a);
  printf("Size of a is %d\n", sizeof(a)/sizeof(char));
  printf("Length of a %d\n", strlen(a));
}
