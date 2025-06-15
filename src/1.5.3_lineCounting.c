#include <stdio.h>
#define BLANKCOUNTLIMIT 2

int main(void)
{
    // Write a program to count blanks, tabs, and newlines
//
//    int character, blanks, tabs, newlines;
//
//    blanks = 0;
//    tabs = 0;
//    newlines = 0;
//
//    while ((character = getchar()) != EOF) {
//        if (character == '\n') { ++newlines; }
//        if (character == '\t') { ++tabs; }
//        if (character == ' ') { ++blanks; }
//    }
//
//    printf("Newlines:\t%d\n", newlines);
//    printf("Tabs:\t%d\n", tabs);
//    printf("Blanks:\t%d\n", blanks);

    // Write a program to copy its input to its output
    // Replacing each string of one or more blanks by a single blank

//    int c, b;
//
//    b = 0;
//    while ((c = getchar()) != EOF) {
//        if (c == ' ') {
//            ++b;
//        } else {
//            b = 0;
//        }
//        if (b < BLANKCOUNTLIMIT) putchar(c);
//    }

    /* Write a program to copy its input to its output
    replacing each tab by \t,
    each backspace by \b,
    and each backslash by \\.
    This makes tabs and backspaces visible in an unambiguous way */

    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') { printf("\\t"); }
        else if (c == '\b') { printf("\\b"); }
        else if (c == '\\') { printf("\\\\"); }
        else { putchar(c); }
    }

    return 0;
}
