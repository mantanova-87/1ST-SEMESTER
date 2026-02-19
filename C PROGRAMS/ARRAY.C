#include<stdio.h>
int main()
{
    
    int A[3][3] ;
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j< 3; j++)
        {
            scanf("%d",&A[i][j]);
        }   
    }
    int S=0;
    for ( i = 0; i < 3; i++)
    {
        
        for ( j = 0; j < 3; j++)
        {
            if (i==j)
            {
                S+=A[i][j];
            }
            
            
        }   
    }
    printf("%d",S);
    return 0;
}