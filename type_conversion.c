#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    float c = a / b;
    // int and int ---> int
    printf("The value of a/b is %.3f\n", c); // 4.000
    int d = 5;
    float e = 3;
    // int and float --> float
    printf("The value of d/e is %.3f\n", d / e); // 1.667
    float f = 7;
    float g = 2;
    // float and float  --> float
    printf("The value of f/g is %.3f\n", f / g); // 3.500
    return 0;
}
