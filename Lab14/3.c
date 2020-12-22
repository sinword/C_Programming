#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//-10.5 -1.8 3.5 6.3 7.2  1 2 2 3 4
//-1.8 3.1 6.3            0 1 2 2 3
void sort(double arr1[], int c1, double arr2[], int c2){
  int k1 = 0, k2 = 0, end;
  double temp;
  while(1){
    if(c1 == k1 || c2 == k2){
      break;
    }
    //printf("%lf %lf\n", arr1[k1], arr2[k2]);
    if(arr1[k1] > arr2[k2]){
      temp = arr2[k2];
      k2++;
    }
    else{
      if(arr1[k1] <= arr2[k2]){
        temp = arr1[k1];
        if(arr1[k1] == arr2[k2]){
          k2++;
        }
        k1++;
      }
    }
    printf("%lf\n", temp);
  }
  //printf("%d, %d\n", k1, k2);
  if(c1 <= k1){
    for(int i=k2;i<c2;i++){
      printf("%lf\n", arr2[i]);
    }
  }
  else{
    for(int i=k1;i<c1;i++){
      printf("%lf\n", arr1[i]);
    }
  }
}

int main(){
  double arr1[20], arr2[20];
  int count1 = 0, count2 = 0;
  char str[1000], *temp, *ptr;
  printf("1st array: ");
  gets(str);
  temp = strtok(str, " ");
  while(temp != NULL){
    arr1[count1] = strtod(temp, &ptr);
    count1++;
    temp = strtok(NULL, " ");
  }
  printf("2st array: ");
  gets(str);
  temp = strtok(str, " ");
  while(temp != NULL){
    arr2[count2] = strtod(temp, &ptr);
    count2++;
    temp = strtok(NULL, " ");
  }

  sort(arr1, count1, arr2, count2);
}
