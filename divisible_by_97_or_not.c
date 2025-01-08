#include <stdio.h>

int main()
{
   printf("Enter a number: ");
   int a;
   scanf("%d", &a);
   // if remainder is 0 then divisible, if not then not divisible
   printf("Remainder 0,then divisible.\n");
   printf("The remainder is %d\n", a % 97);
}
