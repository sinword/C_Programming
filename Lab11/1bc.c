#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int maze[12][12];
int success = 0;
int start_x, start_y;
int end_x, end_y;
int dir_x[4] = {0, 1, 0, -1};
int dir_y[4] = {1, 0, -1, 0};
int travel(int, int, int);
void maze_generator(int*);
/*
int dir[4]
     (-1,0)
        3
(0,-1)2   0(0,1)
        1
      (1,0)
*/

int main(){
  srand(time(NULL));
  char temp;
  int dir, result;
  /*for(int i = 0; i < 12; i++){//enter route
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

  for(int i=0;i<12;i++){
    if(maze[i][0] == 0){
      start_x = i;
      start_y = 0;
    }
    if(maze[i][11] == 0){
      end_x = i;
      end_y = 11;
    }
  }
  printf("Enter start point: ");
  scanf("%d%d", &start_x, &start_y);
  printf("Enter end point: ");
  scanf("%d%d", &end_x, &end_y);
  scanf("%d", &dir);*/
  maze_generator(&dir);
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
  //printf("dir: %d\n", dir);
  printf("\n");
  maze[start_x][start_y] = 2;
  if(maze[start_x+dir_x[dir]][start_y+dir_y[dir]] == 1){
    result = 0;
  }
  else{
    result = travel(start_x+dir_x[dir], start_y+dir_y[dir], dir);
  }
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
  if(result == 0){
    printf("This maze has no solution");
  }
}

int travel(int x, int y, int dir){
  maze[x][y] = 2;
  if(x == end_x && y == end_y){
    return 1;
  }
  if(x == start_x && y == start_y){
    return 0;
  }
  else{
    if(maze[x+dir_x[(dir + 1) % 4]][y+dir_y[(dir + 1) % 4]] != 1){//右方有路 向右轉
      dir = (dir + 1) % 4;
      travel(x+dir_x[dir], y+dir_y[dir], dir);
    }
    else{
      if(maze[x+dir_x[dir]][y+dir_y[dir]] != 1){//前方沒牆 向前走
        //printf("go forword\n");
        travel(x+dir_x[dir], y+dir_y[dir], dir);
      }
      else{
        dir -= 1;
        if(dir < 0){
          dir = 3;
        }
        travel(x, y, dir);
      }
    }
  }
}

void maze_generator(int *dir){
  for(int i=0;i<12;i++){
    maze[0][i] = 1;
    maze[i][0] = 1;
    maze[11][i] = 1;
    maze[i][11] = 1;
  }
  for(int i=1;i<11;i++){
    for(int j=1;j<11;j++){
      maze[i][j] = rand() % 2;
    }
  }
  int temp = rand() % 10 + 1;
  if(rand() % 2){
    maze[temp][0] = 0;
    start_x = temp;
    start_y = 0;
    *dir = 0;
    temp = rand() % 10 + 1;
    maze[temp][11] = 0;
    end_x = temp;
    end_y = 11;
  }
  else{
    maze[0][temp] = 0;
    start_x = 0;
    start_y = temp;
    *dir = 1;
    temp = rand() % 10 + 1;
    maze[11][temp] = 0;
    end_x = 11;
    end_y = temp;
  }
  printf("start\t(%d, %d)\n", start_x, start_y);
  printf("end\t(%d, %d)\n", end_x, end_y);
}
