#include <stdio.h>

int main()
{
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n';                         // represents a new line
    printf("Hey I am good \n nice\n"); // new line ---> /n
    printf("Hey I am good \t nice\n"); // tab ---> /t
    printf("Hey I am good \" nice\n"); // "   ---> /"
    printf("Hey I am good \' nice\n"); // '   ---> /'
    printf("Hey I am good \\ nice\n"); // \\  ---> //
    return 0;
}
