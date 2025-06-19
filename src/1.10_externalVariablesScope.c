#include <stdio.h>

char *myString = "Text goes here";

int main(void) {
  extern char *myString;
  printf("%s\n", myString);
  return 0;
}
