#include <stdio.h>

int main(void) {
  int c;

  printf("What's your character? ");
  while ((c = getchar()) != 'x') {
    if (c == '\n') {
      continue;
    }
    switch (c) {
    case 'a':
      printf("Just the beninging\n");
      break;
    case 'c':
      printf("Such a boring letter\n");
      break;
    default:
      printf("Meh, whatever\n");
      break;
    }
  }

  printf("You made it out of there!\n");

  return 0;
}
