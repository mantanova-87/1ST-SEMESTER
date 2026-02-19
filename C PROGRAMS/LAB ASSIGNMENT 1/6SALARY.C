/*6. WAP to calculate gross salary of a person, where gross_salary=basic+da+ta and da is 10% of basic and ta is
12% of basic.;MANTAVYA KUMAR;24-09-2025*/
#include<stdio.h>
int main(){
    float BS,GS;
    printf("PLEASE ENTER THE BASIC SALARY OF THE EMPLOYEE :");
    scanf("%f",&BS);
    GS=BS+((BS*10)/100)+((BS*12)/100);
    printf("THE GROSS SALARY OF THE EMPLOYEE  AFTER CONSIDERING TA AND DA IS %f",GS);
    return 0;
}