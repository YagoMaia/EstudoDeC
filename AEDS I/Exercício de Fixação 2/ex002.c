#include <string.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float C, F = 50;
    while (F <= 150)
    {
        C = (5 * (F - 32)) / 9;
        printf("%.0fF == %.2fC\n", F, C);
        F++;
    }
    return 0;
}