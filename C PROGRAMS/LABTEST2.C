/*GIVEN TWO ARRAYS ARR1[5] AND ARR2[5]  OF TYPE INTEGER .NOW DESIGN A C CODE TO SWAP ELEMENTS BETWEEN THESE TWO ARRAYS.*/
#include<stdio.h>
int main(){
    int ARR1[5],ARR2[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        int a;
        printf("ENTER ELEMENTS TO STORE IN ARRAY 1: ");
        scanf("%d",&a);
        ARR1[i]=a;
    }
    for ( i = 0; i < 5; i++)
    {
        int a;
        printf("ENTER ELEMENTS TO STORE IN ARRAY 2: ");
        scanf("%d",&a);
        ARR2[i]=a;
    }
    int ARR3[5];
    for ( i = 0; i < 5; i++)
    {
        ARR3[i]=ARR2[i];
    }
    for ( i = 0; i < 5; i++)
    {
        ARR2[i]=ARR1[i];
    }
    for ( i = 0; i < 5; i++)
    {
        ARR1[i]=ARR3[i];
    }
    printf("ARRAY1 is as follows: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d,",ARR1[i]);
    }
    printf("\n");
    printf("ARRAY2 is as follows: \n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d,",ARR2[i]);
    }

}