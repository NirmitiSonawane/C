/* Calculate income tax paid by an employee to the government as per the slabs
 mentioned below:
 Income Slab Tax
 2.5 - 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
 Note that there is no tax below 2.5L. Take income amount as an input from the user */

#include <stdio.h>

int main()
{
    int income;
    float tax = 0;

    printf("Enter Income: ");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = income * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = income * 0.20;
    }
    else
    {
        tax = income * 0.30;
    }

    printf("Income = %d\n", income);
    printf("Tax = %.2f", tax);

    return 0;
}