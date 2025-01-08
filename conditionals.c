#include <stdio.h>

int main()
{
    int age = 15;

    if (age > 10)
    {
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }

    if (age % 5 == 0)
    {
        printf("We are inside 2nd if\n");
        printf("It's divided by 5\n");
    }
}
