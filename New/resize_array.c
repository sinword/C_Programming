#include <stdio.h>
#include <stdlib.h>

int main(){
  int* numbers;
  int length = 0;
  int larger[length++];
  int arr[1];
  while(1){
    int input;
    scanf("%d", &input);
    if(input == 0)
    {
      break;
    }
    arr[0] = input;

    for(int i=0;i<length;i++){
      larger[i] = numbers[i];
    }
    numbers = larger;
    numbers[length] = input;
    length++;
  }

  printf("Numbers: ");
  for(int i=0;i<length;i++)
  {
    printf("%d ", numbers[i]);
  }
  printf("\n");
  return 0;
}
