#include <stdio.h>

int main(void)
{
  char string[12] = "hello world";
  char *myString = string;
  printf("%s\n", myString);

  int myarr[10];
  int *p_myarr = myarr;
  *p_myarr = 12;
  printf("%d\n", *p_myarr);

  return 0;
}
