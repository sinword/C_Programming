#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maze[12][12];
int success = 0;
int start_x, start_y;
int dir_x[4] = {0, 1, 0, -1};
int dir_y[4] = {1, 0, -1, 0};
/*
int dir[4]
     (-1,0)
        3
(0,-1)2   0(0,1)
        1
      (1,0)
*/

int travel(int x, int y, int end_x, int end_y, int dir){
  maze[x][y] = 2;
  if(x == end_x && y == end_y){
    success = 1;
    return 1;
  }
  if(x == start_x && y == start_y){
    return 0;
  }
  else{
    //printf("x = %d, y = %d, dir: %d\t", y, x, dir);//前面沒路且右邊有路
    if(success != 1){
      if(maze[x+dir_x[(dir + 1) % 4]][y+dir_y[(dir + 1) % 4]] != 1){//右方有路 向右轉
      //printf("turn right\n");
        dir = (dir + 1) % 4;
        x += dir_x[dir];
        y += dir_y[dir];
        travel(x, y, end_x, end_y, dir);
      }
      else{
        if(maze[x+dir_x[dir]][y+dir_y[dir]] != 1){//前方沒牆 向前走
          //printf("go forword\n");
          travel(x+dir_x[dir], y+dir_y[dir], end_x, end_y, dir);
        }
        else{
          dir = dir - 1;
          //printf("turn left\n");
          if(dir < 0){
            dir = 3;
          }
          travel(x, y, end_x, end_y, dir);
        }
      }
    }
  }
  return 0;
}

int main(){
  char temp;
  int dir;
  int end_x, end_y;
  for(int i = 0; i < 12; i++){//enter route
    for(int j = 0; j < 12; j++){
      scanf("%c", &temp);
      if(temp == '#'){
        maze[i][j] = 1;
      }
      else{
        maze[i][j] = 0;
      }
    }
    getchar();
  }

  printf("Enter start point: ");
  scanf("%d%d", &start_x, &start_y);
  printf("Enter end point: ");
  scanf("%d%d", &end_x, &end_y);
  if(start_x == 0){
    dir = 1;
  }
  if(start_y == 0){
    dir = 0;
  }
  if(start_x == 11){
    dir = 3;
  }
  if(start_y == 11){
    dir = 2;
  }
  //scanf("%d", &dir);
  //printf("\t012345678901\n");
  puts("");
  maze[start_x][start_y] = 2;
  travel(start_x+dir_x[0], start_y+dir_y[0], end_x, end_y, 0);
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      if(maze[i][j] == 2){
        printf("X");
      }
      else{
        if(maze[i][j] == 1){
          printf("#");
        }
        else{
          printf(".");
        }
      }
    }
    printf("\n");
  }
  if(success == 0){
    printf("This maze has no solution");
  }
}
