#include <stdio.h>

int binary(int num[], int key, int left, int right){
  while(left <= right){
    int mid = (left+right)/2;
    if(key > num[mid]){
      left = mid + 1;
    }
    else if(key < num[mid]){
      right = mid - 1;
    }
    else{
      return mid;
    }
  }
  return -1;
}

int main(){
  int num[5];
  int key;
  for(int i=0;i<5;i++){
    num[i] = i;
  }
  while(1){
    scanf("%d", &key);
    int result = binary(num, key, 0, 4);
    if(result == -1){
      printf("Not found.\n");
    }
    else{
      printf("Found at %d.\n", result);
    }
  }
}
