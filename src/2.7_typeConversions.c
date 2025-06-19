#include <stdio.h>

int main(void) {
  int c, C;
  int delta = 'a' - 'A';
  for (c = 'a'; c <= 'z'; ++c) {
    C = c - delta;
    printf("%c -> %c\n", c, C);
  }
  printf("%lu", sizeof(c));
  return 0;
}
