#include <stdio.h>

int main(void)
{
    int c, d;

    d = 0;
    while (c != EOF) {
        printf("%c", c);
        c = getchar();
        d++;
        if (d >= 6) {
            c = -1;
        }
    }
    return 0;
}
