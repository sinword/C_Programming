#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int table[][7]){
  int a = rand()%6+1;
  int b = rand()%6+1;
  table[a][b]++;
  return a+b;
}

int main(){
  int table[7][7] = {0};
  srand(time(NULL));
  int sum[11] = {0};
  for(int i=1;i<=36000;i++){
    sum[roll(table)-2]++;
  }
  printf("\t1\t2\t3\t4\t5\t6\n");
  for(int i=1;i<=6;i++){
    printf("%d", i);
    for(int j=1;j<=6;j++){
      printf("\t%d", table[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  for(int i=0;i<11;i++){
    printf("%d appears %d times, %lf.\n", i+2, sum[i], sum[i]/36000.0);
  }

}
