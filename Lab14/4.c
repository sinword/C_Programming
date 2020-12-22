#include <stdio.h>

int main(){
  int code[12];
  int even = 0, odd = 0, sum = 0, temp, test;
  for(int i=1;i<=11;i++){
    scanf("%d", &temp);
    if(i & 1){
      even += temp*3;
    }
    else{
      odd += temp;
    }
  }
  scanf("%d", &temp);
  sum = odd + even;
  if(sum % 10 == 0){
    test = 0;
  }
  else{
    test = 10 - (sum % 10);
  }
  if(test == temp){
    printf("Validated.\n");
  }
  else{
    printf("Barcode error.\n");
  }
}
