/*  Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user */

#include <stdio.h>

int main()
{   float percentage;
    int marks1;
    printf("Enter marks:");
    scanf("%d", &marks1);

    int marks2;
    printf("Enter marks:");
    scanf("%d", &marks2);

    int marks3;
    printf("Enter marks:");
    scanf("%d", &marks3);

    percentage =( marks1 + marks2 + marks3 )/3.0;

    if (marks1 <= 33 || marks2 <= 33 || marks3 <= 33)
    {
        printf("Fail");
    }
    else if (percentage<= 40)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }
    return 0;
}