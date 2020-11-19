#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  srand(time(NULL));
  int num[5][5];
  int row[5] = {0};
  int column[5] = {0};

  for(int i=0;i<5;i++){
    for(int k=0;k<5;k++){
      num[i][k] = rand()%2;
      if(num[i][k] == 1){
        row[i]++;
        column[k]++;
      }
      printf("%d ", num[i][k]);
    }
    puts("");
  }

  puts("");
  int r = 0;
  int r_co;
  for(int i=0;i<5;i++){
    if(row[i] > r){
      r_co = i;
      r = row[i];
    }
    //printf("%d ", row[i]);
  }
  printf("The first row with the most 1s is row %d", r_co+1);
  puts("");
  int c = 0;
  int c_co;
  for(int i=0;i<5;i++){
    //printf("%d ", column[i]);
    if(column[i] > c){
      c_co = i;
      c = column[i];
    }
  }
  printf("The first column with the most 1s is column %d", c_co+1);
}
