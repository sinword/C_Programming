#include <stdio.h>

void sort(int *m[][2], int row){
  int temp;
  for(int i=0;i<row-1;i++){
    for(int k=i+1;k<row;k++){
      if(m[i][0] < m[k][0]){
        temp = m[i][0];
        m[i][0] = m[k][0];
        m[k][0] = temp;
        temp = m[i][1];
        m[i][1] = m[k][1];
        m[k][1] = temp;
      }
    }
  }
  for(int i=0;i<row-1;i++){
    for(int k=i+1;k<row;k++){
      if(m[i][1] < m[k][1] && (m[i][0] == m[k][0])){
        temp = m[i][1];
        m[i][1] = m[k][1];
        m[k][1] = temp;
      }
    }
  }
}

int main(){
  int row;
  printf("Enter the number of value-pair: ");
  scanf("%d", &row);
  int arr[row][2];
  for(int i=0;i<row;i++){
    printf("Input value-pair: ");
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  sort(&arr, row);
  printf("{");
  printf("{%d, %d}", arr[0][0], arr[0][1]);
  for(int i=1;i<row;i++){
    printf(", {%d, %d}", arr[i][0], arr[i][1]);
  }
  printf("}");
}
