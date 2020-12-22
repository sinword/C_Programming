#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct address_t{
  int a, b, c, d;
  char name[100];
};

int scan_address(struct address_t network[]){
  int count = 0;
  scanf("%d.%d.%d.%d %s", &network[0].a, &network[0].b, &network[0].c, &network[0].d, network[count].name);
  while(network[count].a != 0 && network[count].b != 0 && network[count].c != 0 && network[count].d != 0 && network[count].name != "none"){
    count++;
    scanf("%d.%d.%d.%d %s", &network[count].a, &network[count].b, &network[count].c, &network[count].d, network[count].name);
  }
  return count;
}

int local_address(int a1, int a2, int b1, int b2){
  if(a1 == a2){
    if(b1 == b2){
      return 1;
    }
  }
  return 0;
}

void print_address(struct address_t network[], int count){
  for(int i=0;i<count-1;i++){
    for(int j=i+1;j<count;j++){
      if(local_address(network[i].a, network[j].a, network[i].b, network[j].b)){
        printf("Machines %s and %s are on the same local network.\n", network[i].name, network[j].name);
      }
    }
  }
}

int main(){
  struct address_t network[100];
  int count = scan_address(network);
  print_address(network, count);
}
