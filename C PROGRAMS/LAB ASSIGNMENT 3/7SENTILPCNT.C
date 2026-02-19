/*Q7.  Write a program to enter the numbers till the user wants and at the end
it should display count of positive,negative and zeroes entered;MANTAVYA KUMAR;27-09-2025 */
#include<stdio.h>
int main()
{   
    int I;
    int CP=0,CN=0,CO=0;
    while (I=1)
    {   
        int A;
        printf("\nENTER THE NUMBER: ");
        scanf("%d",&A);
        printf("\nENTER 1 IF YOU WISH TO ENTER ANOTHER NUMBER OR ENTER SOMETHING ELSE: ");
        scanf("%d",&I);
        if (A<0)
        {
            CN+=1;
        
        }
        if (A>0)
        {
            CP+=1;
        }
        if (A==0)
        {
            CO+=1;
        
        }
        if (I!=1)
        {
            printf("\nTHE NUMBER OF POSITIVE NUMBERS ENTERED BY YOU IS: %d",CP);
            printf("\nTHE NUMBER OF ZEROES ENTERED BY YOU IS: %d",CO);
            printf("\nTHE NUMBER OF NEGATIVE NUMBERS ENTERED BY YOU IS: %d",CN);
           
        }
    
    if (I!=1)
        {
         
            break;
        }
    }
    return 0;
}
