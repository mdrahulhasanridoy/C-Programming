#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    float e = 3 * x / y - z + k;
    /*
    = 3*x/y - z+k
    = 3*2/3 - 3+1
    = 6/3 - 3 + 1
    = 2 - 3 + 1
    = -1 +1 = 0
    */
    printf("The value of e is %.2f\n", e);
}
