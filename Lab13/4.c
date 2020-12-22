#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct sci_not_t{
  double m;
  double e;
};

void scan_sci(struct sci_not_t *num1, struct sci_not_t *num2){
  char arr1[100], arr2[100], arr3[100], arr4[100];
  char *endptr;
  scanf("%se%s", arr1, arr2);//regex
  scanf("%se%s", arr3, arr4);
  num1->m = strtod(arr1, &endptr);
  num1->e = strtod(arr2, &endptr);
  num2->m = strtod(arr3, &endptr);
  num2->e = strtod(arr4, &endptr);
}

void print_sci(struct sci_not_t *num1, struct sci_not_t *num2){
  double mantissa = 0, exponent = 0;
  double temp = mantissa;
  mantissa = num1->m * pow(10, num1->e) + num2->m * pow(10, num2->e);
  while(mantissa >= 1){
    mantissa /= 10;
    exponent++;
  }
  printf("Sum: %.5lfe%.0lf\n", mantissa, exponent);
  exponent = 0;
  mantissa = num1->m * pow(10, num1->e) - num2->m * pow(10, num2->e);
  while(mantissa >= 1){
    mantissa /= 10;
    exponent++;
  }
  printf("Difference: %.5lfe%.0lf\n", mantissa, exponent);
  exponent = 0;
  mantissa = num1->m * pow(10, num1->e) * num2->m * pow(10, num2->e);
  while(mantissa >= 1){
    mantissa /= 10;
    exponent++;
  }
  printf("Product: %.5lfe%.0lf\n", mantissa, exponent);
  exponent = 0;
  mantissa = num1->m * pow(10, num1->e) / num2->m * pow(10, num2->e);
  while(mantissa >= 1){
    mantissa /= 10;
    exponent++;
  }
  printf("Quotient: %.5lfe%.0lf\n", mantissa, exponent);
}
int main(){
  struct sci_not_t num1, num2;
  printf("Value input: ");
  scan_sci(&num1, &num2);
  print_sci(&num1, &num2);
}
