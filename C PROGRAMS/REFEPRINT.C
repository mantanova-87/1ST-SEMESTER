/*PROGRAM TO PRINT OUTPUT IN MAIN FUNCTION WITHOUT RETURNING ;AUTHOR=MANTAVYA KUMAR;DATE=31/10/2025*/
#include <stdio.h>
void  fact(int *);
int main()
{
    printf("ENTER THE INTEGER TO FIND ITS FACTORIAL: ");
    int N;
    scanf("%d",&N);
    if (N<0)
    {
        printf("FACTORIAL OF NEGATIVE NUMBERS IS NOT DEFINED");
    }
    else if (N==0)
    {
        printf("THE FACTORIAL OF 0 IS 1");   
    }
    else
    {
        fact(&N);
        printf("FACTORIAL IS: %d",N);
    }
}
void fact(int *x)
{
    int F=1,i;
    for ( i = *x; i >0; i--)
    {
        F*=i;
    }
    *x=F;
    
}
