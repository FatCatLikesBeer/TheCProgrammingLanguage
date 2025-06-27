#include <stdio.h>

/* copies line to dest, returns int line length */
int getLine(char dest[], int lim) {
  int c, i = 0;
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
    dest[i++] = c;
  }
  if (c == '\n') {
    dest[i++] = c;
  }
  dest[i] = '\0';
  return i;
}
