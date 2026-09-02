// Write a program to print multiplication table of 10 in reversed order

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Value:");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i * n);
    }
    return 0;
}