 #include <stdio.h>

void t(int n, char s, char d, char a){
  if(n == 1){
    printf("Move disk 1 from %c to %c\n", s, d);
    return;
  }
  t(n-1, s, a, d);
  printf("Move disk %d form %c to %c\n", n, s, d);
  t(n-1, a, d, s);
}

int main(){
  int n;
  while(1){
    scanf("%d", &n);
    t(n, 'A', 'C', 'B');
  }
}
