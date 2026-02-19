/*Q4. Write a Program to print Armstrong Series between 1 to 1000*/
#include<stdio.h>
#include<math.h>
int main()
{
    int A;
    printf("THE ARMSTRONG NUMBERS BETWEEN 0 TO 1000 ARE: \n");
    for ( A= 0; A<=1000; A++)
    {
        if (A>0 && A<10)
        {
            printf("%d",A);
            printf("\n");
        }
        else if (A>=10  && A<100)
        {
            int C;
            C=pow((A/10),2)+pow((A%10),2);

            if (C==A)
            {
            printf("%d",A);
            printf("\n");
            }
        }
        else if (A>=100 && A<1000)
        {
            int D;
            D=pow((A/100),3)+pow(((A%100)/10),3)+pow(((A%100)%10),3);
            if (D==A)
            {
            printf("%d",A);
            printf("\n");
            }
        
        }
        
    
    
    }
    return 0;

}