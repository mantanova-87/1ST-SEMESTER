/*Q8. Write a program that uses a loop to find the sum of all numbers from 1 to 100 but 
terminates when the sum exceeds 1000. ;MANTAVYA KUMAR;01-10-2025*/
#include<stdio.h>
int main(){
    int A,S=0;
    for ( A = 0; A <= 100; A++)
    {
        S=S+A;
        if (S>1000)
        {
            printf("SUM EXCEEDED 1000");
            printf("\nSUM= %d",S);
            printf("\nVALUE OF END POINT: %d",A);
            break;
        }   
    }
}
