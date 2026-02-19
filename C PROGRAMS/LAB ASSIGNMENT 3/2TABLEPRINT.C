/*Q2. Write a program to print the multiplication table of the number entered by the user. The 
table should get displayed in the following form. 
10 * 1 = 10
10* 2 = 20 ;MANTAVYA KUMAR;26-09-2025*/
#include<stdio.h>
int main(){
    int I;
    printf("ENTER THE NUMBER WHOSE TABLE YO WANT TO PRINT: ");
    scanf("%d",&I);
    for (int K= 1; K<=10; K++)
    {   
        int L;
        printf("%d",I);
        printf("*");
        printf("%d",K);
        L=I*K;
        printf("= %d",L);
        printf("\n");
        

    }
    return 0;
}