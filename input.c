
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    printf("The value of a is %d\n", a);

    char c = 'a';
    float b = 1.4;
    printf("The value of b is %f\n", b);
    printf("The value of c is %c\n", c);
    printf("The value of b is %.2f\n", b);
}
