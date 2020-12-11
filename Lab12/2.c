#include <stdio.h>
#include <string.h>

int testPalindrome(char arr[], int n, int counter, int k){
  if(n < k){
    if(arr[n] == arr[k-n-1]){
      counter++;
    }
    n++;
    testPalindrome(arr, n, counter, k);
  }
  else{
    if(counter == k){
      return 1;
    }
    else{
      return 0;
    }
  }
}
//65 90
//97 122
int main(){
  char arr1[100], arr2[100], temp[100];
  int i = 0;
  gets(temp);
  int n = strlen(temp);
  int count = 0;
  for(int i=0;i<n;i++){
    if((temp[i] >= 65 && temp[i] <= 90) || (temp[i] >= 97 && temp[i] <= 122)){
      arr1[count] = temp[i];
      count++;
    }
  }
  int result = testPalindrome(arr1, 0, 0, count);
  printf("%d", result);
}
