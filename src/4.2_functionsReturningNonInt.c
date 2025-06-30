#include <ctype.h>
#include <stdio.h>

/* atof: convert string s to double */
double atof(char s[]) {
  double val, power, result, eval, eresult = 1.0;
  int i, ei, sign, esign;

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

  // Floating point found
  if (s[i] == '.')
    i++;

  /* Iterate through decimal number part
   * Power represents the column
   * Increment power
   */
  for (power = 1.0; isdigit(s[i]); i++) {
    // What?
    val = 10.0 * val + (s[i] - '0');
    power *= 10.0;
  }

  // Control flow in case of 'e' or 'E'
  if ('e' == s[i] || 'E' == s[i]) {
    i++;

    esign = s[i] == '-' ? -1 : 1;

    if ('-' == s[i] || '+' == s[i])
      i++;

    eval = 0.0;
    for (ei = i; '\0' != s[ei]; ei++) {
      eval = 10.0 * (eval + (s[ei] - '0'));
    }
    eval = eval / 10.0;

    ei = 0;
    if (-1 == esign) {
      while (ei < (int)eval) {
        eresult = eresult * 10.0;
        ei++;
      }
    } else {
      while (ei < (int)eval) {
        eresult = eresult / 10.0;
        ei++;
      }
    }
  }

  // Assemble result
  result = sign * (val / (power * eresult));
  return result;
}

int main(void) {
  char first[] = "    29384.1982E-10";
  char second[] = "    29384.1982e2";
  char third[] = "    11114.19827";
  printf("Original: %s -> %10.15f\n\n", first, atof(first));
  printf("Original: %s -> %10.15f\n\n", second, atof(second));
  printf("Original: %s -> %10.15f\n\n", third, atof(third));
  return 0;
}
