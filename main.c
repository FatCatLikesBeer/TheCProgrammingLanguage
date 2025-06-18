#include <stdio.h>
#include <string.h>

// Is a character array any different from a string?
int main(void) {
  int i = 0;
  long length;
  // This is where it differs: myString is a string literal, a convience item
  char *myString = "does this work?";
  char placholder[50];

  length = strlen(myString);

  // while (i < length) {
  //   placholder[i] = myString[i];
  //   ++i;
  // }

  strcpy(placholder, myString);

  printf("%s\n", myString);
  printf("%s\n", "string above, placeholder below.");
  printf("%s\n", placholder);

  return 0;
}
