/*Q6. Implement a C program that checks if a given number is prime or not using a loop and  conditional statements.;
MANTAVYA KUMAR;27-09-2025*/
#include<stdio.h>
int main(){
    int I;
    printf("ENTER THE NUMBER YOU WANT TO CHECK FOR BEING A PRIME NUMBER: ");
    scanf("%d",&I);
    if (I<1)
    {
        printf("THE NUMBER YOU ENTERED IS EITHER 0 OR IT IS A NEGATIVE NUMBER.THEY AREN'T PRIME NUMBERS AS PRIME NUMBERS ARE DEFINED ONLY FOR NATURAL NUMBERS");
    }
    else if (I==1)
    {
        printf("1 IS NOT A PRIME NUMBER AS PER THE FUNDAMENTAL THEOREM OF ARITHMETIC");
    }
    else if (I==2)
    {
        printf("2 IS THE SMALLEST PRIME NUMBER");
    }
     else if (I==3)
    {
        printf("3 IS A PRIME NUMBER");
    }
    else if (I>3)
    {   
        int K;
        for ( K=2; K<=(I/2); K++)
        {
            if (I%K==0)
            {
                printf("THE ENTERED NUMBER IS NOT A PRIME NUMBER");
                break;
            }
            else
            {
                printf("THE GIVEN NUMBER IS  A PRIME NUMBER");
            }
            
        }
    
    }
    
    return 0;
}