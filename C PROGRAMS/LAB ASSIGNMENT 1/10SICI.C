/*10. WAP for simple interest and compound interest. ;MANTAVYA KUMAR;25-09-2025*/
#include<stdio.h>
#include<math.h>
int main(){
    float P,R,T,SI,CI;
    printf("ENTER THE PRINCIPAL AMOUNT IN Rs. : ");
    scanf("%f",&P);
    printf("ENTER RATE OF INTEREST PER ANNUM: ");
    scanf("%f",&R);
    printf("ENTER THE DURATION OF INTEREST IN YEARS: ");
    scanf("%f",&T);
    SI=((P*R*T)/100);
    CI=P*(pow((1+(R/100)),T));
    printf("THE SIMPLE INTEREST IS Rs. %f",SI);
    printf("\nTHE COMPOUND INTEREST IS Rs. %f",CI);
    return 0;
}