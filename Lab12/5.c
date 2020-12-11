#include <stdio.h>
#include <string.h>

int main(){
  char arr1[100];
  char arr2[100][100];
  int count = 0;
  for(int i=0;i<100;i++){
    memset(arr2[i], 0 ,100);// 0為ascii code的'\0'(NULL)
  }
  char *temp;
  gets(arr1);
  temp = strtok(arr1, " ");
  while(temp != NULL){
    strcpy(arr2[count], temp);
    temp = strtok(NULL, " ");
    count++;
  }
  for(int i=count-1;i>=0;i--){
    printf("%s ", arr2[i]);
  }
}
