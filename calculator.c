#include <stdio.h>

int main(void) {
  double num1, num2;
  char operation;

  printf("🧮 CALCULATOR 🧮\n\n");
  printf("Valid operations:\n+ SUM\n- SUBTRACTION\n* MULTIPLICATION\n% DIVISION\n\n");

  printf("Enter the symbol of the operation: ");
  scanf("%c", &operation);

  printf("Enter the first number: ");
  scanf("%lf", &num1);

  printf("Enter second number: ");
  scanf("%lf", &num2);

  switch (operation) {
    case '+':
      printf("The sum of %.1lf and %.1lf is equal to %.1lf\n", num1, num2, num1 + num2);
      break;

    case '-':
      printf("The subtraction of %.1lf and %.1lf is equal to %.1lf\n", num1, num2, num1 - num2);
      break;

    case '*':
      printf("The multiplication of %.1lf and %.1lf is equal to %.1lf\n", num1, num2, num1 * num2);
      break;

    case '%':
      printf("The multiplication of %.1lf and %.1lf is equal to %.1lf\n", num1, num2, (float) num1 / num2);
      break;

    default:
      printf("Sorry, %c is not a valid operation.\n", operation);
    }
}