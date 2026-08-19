/* Calculate the area of a circle and modify the same program to calculate the volume of
 a cylinder given its radius and height*/

#include <stdio.h>

int main()
{
    int r = 6;
    int h = 2;

    printf("Area of circle is:%f\n", 3.14 * r * r);
    printf("Volume of circle is:%f", 3.14 * r * r * h);

    return 0;
}