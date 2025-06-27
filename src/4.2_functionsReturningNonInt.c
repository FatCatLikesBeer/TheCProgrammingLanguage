#include <ctype.h>
#include <stdio.h>

/* atof: convert string s to double */
double atof(char s[]) {
  double val, power, result;
  int i, sign;

  // Increment when nolonger space ' '
  for (i = 0; isspace(s[i]); i++)
    ;

  // Set sign
  sign = (s[i] == '-') ? -1 : 1;

  // Increment if '+' or '-'
  if (s[i] == '+' || s[i] == '-')
    i++;

  // Iterate through whole number part
  for (val = 0.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
  }

  if (s[i] == '.')
    // Floating point found
    i++;

  /* Iterate through decimal number part
   * Power represents the column
   * Increment power
   */
  for (power = 1.0; isdigit(s[i]); i++) {
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }

  // Assemble result
  result = sign * (val / power);
  return result;
}

int main(void) {
  char myString[] = "    29384.19827";
  double result;
  result = atof(myString);
  printf("%10.10f\n", result);
  return 0;
}

/*
 * Excercise: rewrite atof to handle 'e' notation: '1234.568e-6'
 */
