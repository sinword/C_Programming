#include <stdio.h>

void board(char area[][3]){
  for(int i=0;i<3;i++){
    printf("-------\n");
    for(int j=0;j<3;j++){
      printf("|%c", area[i][j]);
    }
    printf("|\n");
  }
  printf("-------\n");
}

int game(char area[][3]){
  if(area[1][1] == 'X' && area[0][0] == 'X' && area[2][2] == 'X'){
    return 1;
  }
  if(area[1][1] == 'X' && area[0][2] == 'X' && area[2][0] == 'X'){
    return 1;
  }
  if(area[1][1] == 'O' && area[0][0] == 'O' && area[2][2] == 'O'){
    return 1;
  }
  if(area[1][1] == 'O' && area[0][2] == 'O' && area[2][0] == 'O'){
    return 1;
  }
  for(int i=0;i<3;i++){
    char temp1 = area[i][0];
    char temp2 = area[i][1];
    char temp3 = area[i][2];
    if((temp1 == 'X' && temp2 == 'X' && temp3 == 'X') || (temp1 == 'O' && temp2 == 'O' && temp3 == 'O')){
      return 1;
    }
  }
  for(int i=0;i<3;i++){
    char temp1 = area[0][i];
    char temp2 = area[1][i];
    char temp3 = area[2][i];
    if((temp1 == 'X' && temp2 == 'X' && temp3 == 'X') || (temp1 == 'O' && temp2 == 'O' && temp3 == 'O')){
      return 1;
    }
  }
  return 0;
}

int main(){
  int row, column;
  char area[3][3] = {' '};
  int count = 0;
  int win;
  while(count <= 9){
    printf("Enter a row (0, 1, or 2) for player X: ");
    scanf("%d", &row);
    printf("Enter a column (0, 1, or 2) for player X: ");
    scanf("%d", &column);
    area[column][row] = 'X';
    board(area);
    win = game(area);
    if(win == 1){
      printf("X wins!\n");
      break;
    }
    else{
      count++;
      if(count == 9){
        break;
      }
    }
    fflush(stdin);

    printf("Enter a row (0, 1, or 2) for player O: ");
    scanf("%d", &row);
    printf("Enter a column (0, 1, or 2) for player O: ");
    scanf("%d", &column);
    area[column][row] = 'O';
    board(area);
    win = game(area);
    if(win == 1){
      printf("O wins!\n");
      break;
    }
    else{
      count++;
      if(count == 9){
        break;
      }
    }
    fflush(stdin);

  }
  if(count == 9){
    printf("Draw.\n");
  }
}
