#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);

    a = 0;
    b = 1;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);

    a = 1;
    b = 0;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);

    a = 1;
    b = 1;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a or b is %d\n", a || b);
    a = 1;
    printf("The value of not a is %d\n", !a);
}
