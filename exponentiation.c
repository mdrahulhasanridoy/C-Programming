#include <stdio.h>
#include <math.h>

int main()
{
    double base = 2.0;
    double exponent = 3.0;

    double result = pow(base, exponent);                    // 2^3=8
    printf("%.2f ^ %.2f = %.2f\n", base, exponent, result); // 2^3=8.00
    return 0;
}
