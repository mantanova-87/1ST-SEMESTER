/*Q9. Write a program to find GCD (greatest common divisor or HCF) and LCM (least common 
multiple) of two numbers;MANTAVYA KUMAR;01-10-2025*/
#include<stdio.h>
int main()
{
    int A,B;
    printf("ENTER THE FIRST  NUMBER: ");
    scanf("%d",&A);
    printf("ENTER THE SECOND NUMBER: ");
    scanf("%d",&B);
    
    /*FOR HCF*/
    int I;
    if (A>B)
    {
        
        while (I!=0)
        {   

            I=A%B;
            A=B;
            B=I;
            if (I==0)
            {
                printf("GREATEST COMMON DIVISOR OF GIVEN NUMBERS IS: %d",A);
                
            }
            
            
        }
        
    }
    else
    {
    
        while (I!=0)
        {   

            I=B%A;
            B=A;
            A=I;
            if (I==0)
            {
                printf("GREATEST COMMON DIVISOR OF GIVEN NUMBERS IS: %d",B);
                break;
            }
            
            
        }
    }
    /*CODE FOR LCM*/
    int F,G,H,J;
    printf("\nLET'S FIND OUT THE LCM OF TWO NUMBERS\n ");
    printf("PLEASE ENTER THE FIRST NUMBER: ");
    scanf("%d",&F);
    printf("PLEASE ENTER THE SECOND NUMBER: ");
    scanf("%d",&G);
    H=F*G;
    for ( J= 2; J <=H; J++)
    {
        if (H%J==0 && J>=F && J>=G)
        {
            if (J%F==0 && J%G==0 )
            {
                printf("THE LCM IS %d",J);
                break;
            }
            
        }
        
        
    }
}


