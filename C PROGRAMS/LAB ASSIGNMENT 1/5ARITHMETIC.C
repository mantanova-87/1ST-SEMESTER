/*5. WAP to add, subtract and multiply numbers. [ Note: Avoid Divide operation, we will do it in next lab after type
casting];MANTAVYA KUMAR;24-09-2025 */
#include<stdio.h>
int main(){
    float A,B,SUM,S,M;
    printf("ENTER THE FIRST NUMBER");
    scanf("%f",&A);
    printf("ENTER THE FIRST NUMBER");
    scanf("%f",&B);
    SUM=A+B;
    S=A-B;
    M=A*B;
    printf("THE SUM OF THE ENTERED NUMBERS IS %f",SUM);
    printf("\nTHE DIFFERENCE OF THE ENTERED NUMBERS WHEN SECOND NUMBER IS SUBTRACTED FROM THE FIRST NUMBER %f",S);
    printf("\nTHE MULTIPLICATION OF THE ENTERED NUMBERS IS %f",M);
    return 0;

}