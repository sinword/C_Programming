#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char *a;
  scanf("%s", a);
  char *arr1, *arr2, *arr3;
  arr1 = strtok(a+1, ")");
  arr2 = strtok(NULL, "-");
  arr3 = strtok(NULL, "\0");
  strcat(arr2, arr3);
  //printf("%s", arr2);
  int area;
  long phone;
  sscanf(arr1, "%d", &area);
  sscanf(arr2, "%ld", &phone);
  printf("%02d", area);
  printf("\n%08ld", phone);
}
