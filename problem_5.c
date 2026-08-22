/* Write a program to calculate simple interest for a set of values representing principal,
number of years, and rate of interest.
Code */

#include <stdio.h>

int main(){
    int p;
    int t;
    int r;

    printf("Enter  value:\n");
    scanf("%d %d %d",&p ,&t ,&r);

    printf("Simple Interest:%d",p*r*t);

    return 0;
}