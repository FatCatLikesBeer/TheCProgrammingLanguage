#include <stdio.h>

/* for (i=0; i<lim-1 && (c=getchar())) != '\n' && c != EOF; ++i) s[i] = c;*/
/* Write a loop equivalent to the for loop above without using && or || */
int main(void) {
  int i, lim, c;
  int s[60];
  for (i = 0; i < lim - 1; ++i) {
    if ((c = getchar()) != '\n') {
      if (c != EOF) {
        s[i] = c;
      }
    }
  }
  return 0;
}
