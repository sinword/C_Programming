#include <stdio.h>

struct complex{
  float real;
  float imaginary;
};

void add_complex(struct complex a, struct complex b){
  float sum_r;
  float sum_i;
  sum_r = a.real + b.real;
  sum_i = a.imaginary + b.imaginary;
  printf("The sum is %.1f+%.1fi", sum_r, sum_i);
}

int main(){
  struct complex a, b;
  printf("Enter two complex numbers: ");
  scanf("%f+%fi %f+%fi", &a.real, &a.imaginary, &b.real, &b.imaginary);

  add_complex(a, b);
}
