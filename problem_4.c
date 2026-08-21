/* Write a program to convert Celsius (Centigrade) temperature to Fahrenheit*/

#include <stdio.h>

int main()
{
    int c, f;
    printf("Enter value:");
    scanf("%d", &c);
    f = ((9.0 / 5.0) + 32) * c;
    printf("%d", f);
    return 0;
}

