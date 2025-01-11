#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    if (a)
    {
        if (b)
        {
            printf("both are true\n");
        }
    }
    // we can write it with another way
    // is same as writing.......
    if (a && b)
    {
        printf("both are true\n");
    }
}
