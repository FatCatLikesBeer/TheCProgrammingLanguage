#include <stdio.h>
#include <string.h>
#define LIMIT 127

int main(void) 
{
    // Prints out each digit, whitespace characters, and all others

    /*
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits =");

    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    */

    /* Write a program to print the histogram of the lengths
    of words in its input. Its easy to draw the histogram
    with bars horizontal; a vertical orientation is more 
    challenging. */

    /*
    int i, j, c, tracker;
    int key[20];

    tracker = 0;
    for (i = 0; i < 20; ++i) key[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (tracker == 0) continue;
            key[tracker]++;
            tracker = 0;
        } else {
            ++tracker;
        }
    }

    for (i = 0; i < 20; ++i) {
        printf("%d - %d:\t", i, key[i]);
        for (j = 0; j < key[i]; ++j) {
            printf("#");
        }
        printf("\n");
    }
    */

    // Write a program to print a histogram of the frequencies
    // of different characters in its input.


    int c, i;
    int key[LIMIT];

    for (i = 0; i < LIMIT; i++) {
        key[i] = 0;
    }

    while ((c = getchar()) != EOF)
        ++key[c];

    for (i = 0; i < LIMIT; i++) {
        printf("%d - %c:\t %d\n", i, i, key[i]);
    }

    return 0;
}
