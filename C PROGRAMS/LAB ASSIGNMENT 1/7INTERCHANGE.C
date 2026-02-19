/*7.Two numbers are input through the keyboard into location c and d. WAP to interchange the contents of c and
d using third variable.*/
#include<stdio.h>
int main(){
    int C,D,E;
    printf("ENTER THE NUMBER TO BE STORED IN LOCATION c:");
    scanf("%d",&C);
    printf("ENTER THE NUMBER TO BE STORED IN LOCATION d:");
    scanf("%d",&D);
    E=C;
    C=D;
    D=E;
    printf("THE NUMBER AT LOCATION c is %d",C);
    printf("\nTHE NUMBER AT LOCATION d is %d",D);
    return 0;

}