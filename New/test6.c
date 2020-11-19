#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char str[100];
  int n;
  gets(str);
  scanf("%d", &n);

  for(int i=0;i<strlen(str);i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
      printf("%c", (str[i]+n-97)%26+97);
    }
    else if(str[i] >= 'A' && str[i] <= 'Z'){
      printf("%c", (str[i]+n-65)%26+65);
    }
    else{
      printf("%c", str[i]);
    }
  }
}
