/*MANTAVYA KUMAR;31-08-2025;PROGRAM TO FIND AREA AND PERIMETER OF A RECTANGLE*/
#include<stdio.h>
int main(){
    float L,B,A,P;
    printf("ENTER THE LENGTH OF RECTANGLE IN METRES");
    scanf("%f",&L);
    printf("ENTER THE BREADTH OF RECTANGLE IN METRES");
    scanf("%f",&B);
    A=L*B;
    P=2*(L+B);
    printf("AREA OF RECTANGLE IS\n");
    printf("%f",A);
    printf(" SQUARE METRES \nPERIMETER OF RECTANGLE IS\n");
    printf("%f",P);
    printf(" METRES");
    return 0;
}