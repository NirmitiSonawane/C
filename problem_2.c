/* Write a C program to calculate the area of a rectangle:
 b. Using inputs supplied by the user.*/

#include <stdio.h>

int main()
{
    int l, b;
    printf("Enter  value:\n");
    printf("Enter  value:");
    scanf("%d %d", &l, &b);
    printf("Area of rectangle is:%d", l * b);
    return 0;
}