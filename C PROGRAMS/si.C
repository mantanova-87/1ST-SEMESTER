/*MANTAVYA KUMAR;31-08-2025;PROGRAM TO FIND SIMPLE INTEREST*/
#include <stdio.h>
int main(){
    float PA,RT,TM;
    printf("ENTER PRINCIPAL AMOUNT IN INR");
    scanf("%f", &PA);
    printf("ENTER RATE OF INTEREST PER ANNUM");
    scanf("%f", &RT);
    printf("ENTER DURATION OF INTEREST IN YEARS");
    scanf("%f", &TM);
    float INT;
    INT=(PA*RT*TM)/100;
    printf("%f THE SIMPLE INTEREST IS:",INT);
    return 0;
}
