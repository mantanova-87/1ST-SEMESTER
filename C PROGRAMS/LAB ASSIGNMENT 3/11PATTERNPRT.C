/*Q11. Write a program to print the patterns given below ;MANTAVYA KUMAR;04-10-2025;
1                   
12     
123 
1234  
12345      */
/*THIRD PATTERN*/
#include<stdio.h>
int main()
{
    printf("\n");
    int P=1;
    char c='*';
    while (P<=9)
    {
        
        if (P%2!=0)
        {
            int i;
            
            for ( i = 1; i <=P; i++)
            {
                printf("%4c",c);
            }
            printf("\n");
            
        }
        P+=1;
        
        
    }
    int Q=7;
    while (Q>=1)
    {
        if (Q%2!=0)
        {
            int a;
            for ( a = 1; a<= Q; a++)
            {
                
                printf("%4c",c);
            }
            printf("\n");
        }
        Q-=1;
        
        
    }
}


