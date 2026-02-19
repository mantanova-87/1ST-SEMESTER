/*Q11. Write a program to print the patterns given below ;MANTAVYA KUMAR;04-10-2025;
1                   
12     
123 
1234  
12345      */
/*FIRST PATTERN*/
#include<stdio.h>
int main()
{
    int I;
    I=1;
    while (I<=5)
    {
        int A;
        for ( A = 1; A <=I; A++)
        {
             printf("%d",A);
        }
        
        printf("\n");
        I+=1;
    }
    return 0;


}
