#include <stdio.h>
#include <string.h>

// Is a character array any different from a string?
int main(void) {
  // This is where it differs: myString is a string literal, a convience item
  char *myString = "does this work?";
  char placholder[50];

  // while (i < length) {
  //   placholder[i] = myString[i];
  //   ++i;
  // }

  strcpy(placholder, "nothing to see here");

  printf("%s\n", myString);
  printf("%s\n", "string above, placeholder below.");
  printf("%p\n", placholder[0]);

  printf("%c\n", 0x6e);

  return 0;
}
