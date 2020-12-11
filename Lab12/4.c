#include <stdio.h>
#include <string.h>

int main(){
  int count = 0;
  char arr[100];
  char *temp;// 指標可用，但要用在安全的範圍內
  int r = 1;
  while (r <= 4) {
    gets(arr);
    temp = strtok(arr, " ");// temp目前指向arr內，所以為安全的情況
    while(temp != NULL){
      count++;
      temp = strtok(NULL, " ");
    }
    r++;
  }
  printf("Total number: %d\n", count);
}
