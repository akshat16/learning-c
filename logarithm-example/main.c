#include <math.h>
#include <stdio.h>

int main(void)
{
    double result;
    double x = 100;

    result = log10(x);
    printf("The common log of %lf is %lf\n", x, result);

    return 0;
}
