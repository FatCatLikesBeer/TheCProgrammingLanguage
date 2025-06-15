#include <stdio.h>

/* count chars in input, 1st version */
/*
int main(void)
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
    return 0;
}
*/

/* count chars in input, 2nd version */
int main(void)
{
    long nc;

    for (nc = 0; getchar() != EOF; nc++);
    printf("%ld\n", nc);
    return 0;
}
