#include <stdio.h>

void packCharacters(char a, char b){
  unsigned int num1 = (unsigned)(a);
  unsigned int num2 = (unsigned)(b);
  unsigned int num3;
  num3 = (num1 << 8) | num2;
  for(int i = 31;i>=0;i--){
    printf("%u", (num1 >> i) & 1);
  }
  puts("");
  for(int i = 31;i>=0;i--){
    printf("%u", (num2 >> i) & 1);
  }
  puts("");
  for(int i=31;i>=0;i--){
    printf("%u", (num3 >> i) & 1);
  }
}

int main(){
  char a, b;
  scanf("%c%c", &a, &b);
  packCharacters(a, b);
}
