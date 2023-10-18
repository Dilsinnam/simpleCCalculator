#include <stdio.h>
#include <stdlib.h>

int main() {
  double num1;
  double num2;
  printf("Please enter your first number: ");
  scanf("%lf", &num1); /*use lf when scanning for a double in a scanf2.*/
  printf("Please enter your second number: ");
  scanf("%lf", &num2);
  printf("Answer: %f", num1 + num2);
  return 0;
}