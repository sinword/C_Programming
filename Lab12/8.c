#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  char *articles[5] = {"the", "a", "one", "some", "any"};
  char *noun[5] = {"boy", "girl", "dog", "town", "car"};
  char *verb[5] = {"drove", "jumped", "ran", "walked", "skipped"};
  char *prep[5] = {"to", "from", "over", "under", "on"};
  char temp[10];
  for(int i=0;i<20;i++){
    strcpy(temp, articles[rand()%5]);
    temp[0] += ('A' - 'a');// -= 32
    printf("%s ", temp);
    printf("%s %s %s %s %s.\n", noun[rand()%5], verb[rand()%5], prep[rand()%5], articles[rand()%5], noun[rand()%5]);
  }
}
