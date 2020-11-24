#include <stdio.h>
#include <math.h>

int main(){
  int command;
  int n;
  int x = 0;
  int y = 0;
  int write = 0;
  int dir = 1;
  char board[50][50];
  for(int i=0;i<50;i++){
    for(int j=0;j<50;j++){
      board[i][j] = ' ';
    }
  }
  scanf("%d", &command);
  while(command != 9){
    switch(command){
      case(1)://pen up
         write = 0;
        break;
      case(2)://pen down
        write = 1;
        break;
      case(3)://Turn right
        dir = (dir+1)%4;
        break;
      case(4)://Turn left
        dir = abs(dir-1)%4;
        break;
      case(5)://move forwoar by n steps
        getchar();
        scanf("%d", &n);
        if(write == 1){
          if(dir == 0){
            for(int i=y;i>y-n;i--){
              board[x][i] = '*';
            }
            y -= n;
          }
          else{
            if(dir == 1){
              for(int i=x;i<x+n;i++){
                board[i][y] = '*';
              }
              x += n;
            }
            else{
              if(dir == 2){
                for(int i=y;i<y+n;i++){
                  board[x][i] = '*';
                }
                y += n;
              }
              else{
                for(int i=x;i>x-n;i--){
                  board[i][y] = '*';
                }
                x -= n;
              }
            }
          }
        }
        else{
          switch(dir){
            case 0:
              y -= n;break;
            case 1:
              x += n;break;
            case 2:
              y += n;break;
            case 3:
              x -= n;break;
          }
        }
        break;
      case(6)://print teh array
        for(int i=0;i<50;i++){
          for(int j=0;j<50;j++){
            printf("%c", board[i][j]);
          }
          printf("\n");
        }
        break;
    }
    scanf("%d", &command);
  }
}
