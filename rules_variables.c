#include <stdio.h>

int main()
{
    int a;            // first character must be an alphabet
    int _a;           // first character must be an underscore
    int ridoy_nocode; // commas, blanks, special symbol not allowed
    int switchx;      // variables names are case senssitive

    a = 1;
    _a = 2;
    ridoy_nocode = 3;
    switchx = 4;
    printf("Sum of all variables : %d\n", a + _a + ridoy_nocode + switchx);
    return 0;
}
