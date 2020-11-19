#include <stdio.h>

int main(){
  int n, m, p;
  printf("Input n, m, and p: ");
  scanf("%d %d %d", &n, &m, &p);
  int a[n][m], b[m][p];
  printf("Enter a matrix: ");
  for(int i=0;i<n;i++){
    for(int k=0;k<m;k++){
      scanf("%d", &a[i][k]);
    }
  }
  printf("Enter another matrix: ");
  for(int i=0;i<m;i++){
    for(int k=0;k<p;k++){
      scanf("%d", &b[i][k]);
    }
  }

  int c[n][p];
  for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
      c[i][j] = 0;
      for(int k=0;k<m;k++){
        c[i][j] += a[i][k] * b[k][j];
      }
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
}
