/*Q5.  Write a program to print The Fibonacci series (0, 1, 1, 2, 3, 5, 8, 13, 21, 38, . . .); MANTAVYA KUMAR;26-09-2025*/
#include<stdio.h>
int main()
{
    int A,B=0,C=1,D,S;
    printf("ENTER THE NUMBER OF TERMS OF FIBONACCI SERIES YOU WANT TO PRINT: ");
    scanf("%d",&A);
    printf("FOLLOWING IS THE REQUIRED FIBONACCI SERIES: \n");
    printf("%d ",B);
    
    for ( int I=0; I<=A-2; I++)
    {
        B=C;
        C=S;
        S=B+C;
        printf("%d  ",S);

    }
    return 0;
    

}