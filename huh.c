#include <stdio.h>

int main(void)
{
    char string[12] = "hello world";
    char *myString = string;
    printf("%s\n", myString);
    return 0;
}
