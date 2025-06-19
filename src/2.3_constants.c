#include <stdbool.h>
#include <stdio.h>

enum boolean { NO, YES };

int main(void) {
  if (YES == 1) {
    printf("This workes!\n");
  }
  if (YES == 0) {
    printf("This no workie\n");
  }
  return 0;
}
