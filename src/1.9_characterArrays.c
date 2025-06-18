#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

/* Copies source stringt to destination string */
void copy(char destination[], char source[]);

/* Read a line from input, return length */
int getLine(char source[], int limit);

int main(void) {
  int len, max;
  char bufferHolder[MAXLINE];
  char placeHolder[MAXLINE];

  max = 0;
  while ((len = getLine(bufferHolder, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(placeHolder, bufferHolder);
    }
  }
  if (max > 0) {
    printf("%d ->%s", (int)strlen(placeHolder), placeHolder);
  }
  return 0;
}

int getLine(char source[], int limit) {
  int c, i;
  /*
   * 3 Exit conditions:
   *   i >= limit
   *   c == EOF
   *   c == '\n'
   */
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    source[i] = c;
  if (c == '\n') {
    source[i] = c;
    ++i;
  }
  source[i] = '\0';
  return i;
}

void copy(char destination[], char source[]) {
  int i;
  i = 0;
  while ((destination[i] = source[i]) != '\0') {
    ++i;
  }
}
