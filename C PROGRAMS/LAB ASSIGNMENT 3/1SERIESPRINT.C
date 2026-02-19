/*Q1. Write a program to add first seven terms of the following series using a for loop: (1/1!)+(2/2!)+(3/3!).....;
MANTAVYA KUMAR;26-09-2025;*/

#include <stdio.h>

int main() 
{
    double S = 0.0;
    long long F = 1;
    int I,A;
    printf("ENTER THE NUMBER OF FIRST TERMS WHOSE SUM YOU WANT TO PRINT: ");
    scanf("%d",&A);
    for (I = 1; I <= A; I++) 
    {
        F *= I;
        S += (double)I / F;
    }

    printf("The sum of the first seven terms of the series is: %lf\n", S);
    return 0;
}
