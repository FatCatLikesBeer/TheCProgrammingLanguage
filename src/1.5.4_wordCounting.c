#include <stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    // Counts lines, words, and characters
    int c, nl, nw, nc, state;
    int blankCount = 0;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            ++blankCount;
        } else {
            blankCount = 0;
        }

        // Write a program that pritns its input one word per line
        if (blankCount == 1) { printf("\n"); } 
        if (state == IN) 
        putchar(c);
    }
    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}
