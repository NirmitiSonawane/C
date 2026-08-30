// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter value:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("A is greater");
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is greater");
    }
    else if (c > a && c > b && c > d)
    {
        printf("C is greater");
    }
    else
    {
        printf("Dis greater");
    }
    return 0;
}