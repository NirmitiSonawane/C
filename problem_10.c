// Write a program to determine whether a character entered by the user is lowercase or not

#include <stdio.h>

int main()
{
    char c;
    printf("Enter Char: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("Uppercase");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Another Symbol");
    }
    return 0;
}