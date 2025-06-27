#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getLine(char line[], int max);
int strindex(char source[], char searchfor[]);
int strrindex(char source[], char match[]);

char pattern[] = "it";

int main() {
  char line[MAXLINE];
  int found = 0;

  int index;

  while (getLine(line, MAXLINE) > 0) {
    if ((index = strrindex(line, pattern)) > 0) {

      int i = 0;

      // Print each char before index
      for (i = 0; i < index; ++i)
        printf("%c", line[i]);

      // Print pattern with style
      printf("\x1B[0;32m%s\x1B[0m", pattern);

      // Set index forward length of pattern
      i = i + strlen(pattern);

      // Print remaining chars before null terminator
      for (; line[i] != '\0'; ++i)
        printf("%c", line[i]);

      found++;
    }
  }
  return found;
}

/* matches first match in source, returns match index or -1 */
int strindex(char source[], char match[]) {
  int i, j, k;

  for (i = 0; source[i] != '\0'; i++) {
    for (j = i, k = 0; match[k] != '\0' && source[j] == match[k]; j++, k++)
      ;
    if (k > 0 && match[k] == '\0') {
      return i;
    }
  }
  return -1;
}

/* matches first match in source, returns match index or -1 */
int strrindex(char source[], char match[]) {
  int i, j, k, acc;

  acc = -1;
  for (i = 0; source[i] != '\0'; i++) {
    for (j = i, k = 0; match[k] != '\0' && source[j] == match[k]; j++, k++)
      ;
    if (k > 0 && match[k] == '\0') {
      acc = i;
    }
  }
  return acc;
}
