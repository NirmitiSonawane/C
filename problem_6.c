/*Write a program to check whether a number is divisible by 97 or not.*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter Value:");
    scanf("%d", &a);
    printf("%d", a % 97 == 0);
    return 0;
}