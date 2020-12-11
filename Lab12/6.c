#include <stdio.h>
#include <string.h>


int main(){
  char name[6][100];
  char temp[100];
  printf("Input strings:\n");
  for(int i=0;i<6;i++){
    scanf("%s", name[i]);
  }
  int compare;
  for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
      compare = strcmp(name[i], name[j]);
      if(compare > 0){
        strcpy(temp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], temp);
      }
    }
  }
  printf("The result in alphabetizing order:\n");
  for(int i=0;i<6;i++){
    printf("\"%s\"", name[i]);
    if(i!=5){
      printf(", ");
    }
  }
}
