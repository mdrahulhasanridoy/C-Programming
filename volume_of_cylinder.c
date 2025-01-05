#include <stdio.h>

int main()
{
     int radius = 5;
     printf("The  area of circle with radius %d is %.2f\n", radius, 3.1416 * radius * radius);
     int height = 10;
     printf("The area of cylinder with radius is %d and height %d is %.2f\n", radius, height, 3.1416 * radius * radius * height);
}
