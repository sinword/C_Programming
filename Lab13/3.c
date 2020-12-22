#include <stdio.h>

struct fraction{
  int numerator;
  int denominator;
};

void reduce(struct fraction f, struct fraction * reduced_f){
  int temp = f.numerator;
  while((f.numerator % temp) || (f.denominator % temp)){
    temp--;
  }
  reduced_f->numerator = f.numerator / temp;
  reduced_f->denominator = f.denominator / temp;
}

int main(){
  struct fraction f;
  printf("Enter a fraction: ");
  scanf("%d/%d", &f.numerator, &f.denominator);
  struct fraction out;
  reduce(f, &out);
  printf("In lower terms:%d/%d", out.numerator, out.denominator);
}
