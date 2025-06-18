#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int main(void) {
  int c, i;
  char bufferHolder[MAXLINE];
  char placeHolder[MAXLINE];

  for (i = 0; i < MAXLINE - 1; ++i) {
    placeHolder[i] = bufferHolder[i] = '\0';
  }

  i = 0;

  while ((c = getchar()) != EOF) {
    // if end of line
    //   if placeHolder is smaller than bufferHolder
    //      it's the new placeHolder
    //   reset bufferHolder
    // else
    //   continue to create a line
    if (c == '\n') {
      // if placeHolder is shorter, copy it
      if (strlen(placeHolder) < strlen(bufferHolder))
        strcpy(placeHolder, bufferHolder);

      // reset buffer & index i
      for (i = 0; i < MAXLINE - 1; ++i) {
        bufferHolder[i] = '\0';
      }
      i = 0;
    } else {
      bufferHolder[i] = c;
      ++i;
    }
  }

  printf("%d ->%s\n", (int)strlen(placeHolder), placeHolder);
  return 0;
}
