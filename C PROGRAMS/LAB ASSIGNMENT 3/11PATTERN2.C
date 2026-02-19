/*Q11. Write a program to print the patterns given below ;MANTAVYA KUMAR;04-10-2025;
1                      
123   
12345
123
1      */
/*SECOND PATTERN*/
#include<stdio.h>
int main()
{
    printf("\n");
    int P=1;
    while (P<=5)
    {
        if (P%2!=0)
        {
            int i;
            for ( i = 1; i <=P; i++)
            {
                printf("%d",i);
            }
            printf("\n");
            
        }
        P+=1;
        
        
    }
    int Q=3;
    while (Q>=1)
    {
        if (Q%2!=0)
        {
            int a;
            for ( a = 1; a<= Q; a++)
            {
                printf("%d",a);
            }
            printf("\n");
        }
        Q-=1;
        
        
    }
}