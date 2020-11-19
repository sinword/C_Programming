#include <stdio.h>
#include <stdlib.h>

int n;
int visit(int maze[][n], int route[][n], int i, int j, int endi, int endj, int count, int success){
  route[i][j] = 1;
  if(i == endi && j == endj){
    success = 1;
  }
  if(success == 1){
    printf("%d", count);
    return 0;
  }
  else {
    if(maze[i+1][j] && route[i+1][j]){visit(maze, route, i+1, j, endi, endj, count);}//up
    if(maze[i-1][j] && route[i-1][j]){visit(maze, route, i-1, j, endi, endj, count);}//down
    if(maze[i][j+1] && route[i][j+1]){visit(maze, route, i, j+1, endi, endj, count);}//right
    if(maze[i][j+1] && route[i][j-1]){visit(maze, route, i, j-1, endi, endj, count);}//left
    }
  }
}
int main(){
  printf("Enter the size of maze: ");
  scanf("%d", &n);
  int maze[n][n];
  int route[n][n];
  char temp;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      route[i][j] = 0;
      scanf("%d", &maze[i][j]);
    }
  }
  int starti, startj;
  int endi, endj;
  printf("Enter the starting point: ");
  scanf("%d%d", &starti, &startj);
  printf("Enter the finishing point: ");
  scanf("%d%d", &endi, &endj);
  int count = 0;
  visit(maze, route, starti, startj, endi, endj, count);

}
