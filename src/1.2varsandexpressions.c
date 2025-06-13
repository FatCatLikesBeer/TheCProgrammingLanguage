#include <stdio.h>

/* print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 3000 */
int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // Lower limit of table
    upper = 300;    // Upper limit of table
    step = 20;      // Step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
