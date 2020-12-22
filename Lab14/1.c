#include <stdio.h>

void toBinary(unsigned int num){
  printf("\nAfter reverse: \n");
  for(int i=0;i<32;i++){
    printf("%u", num & 1);
    num >>= 1;
  }
}

int main(){
  unsigned int num, k;
  scanf("%u", &num);
   k = num;
   printf("Before reversed: \n");
  for(int i=31;i>=0;i--){
    printf("%u", (k >> i) & 1);
  }
  toBinary(num);
}
