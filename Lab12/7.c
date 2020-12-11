#include <stdio.h>
#include <string.h>

int main(){
  char arr[100];
  char key[100];
  char *temp;
  printf("Input a sentence:\n");
  gets(arr);
  printf("Input a search key:\n");
  gets(key);
  key[strlen(key)] = '\0';
  temp = strstr(arr, key);
  printf("%s\n", temp + strlen(key));
  temp = strstr(temp + strlen(key), key);
  printf("%s", temp + strlen(key));
}
