/*MANTAVYA KUMAR;01-09-2025;NET SALARY CALCULATION AFTER ADDING TA & da*/
#include<stdio.h>
int main(){
    int SAL;
    float TA,DA;
    printf("PLEASE ENTER THE SALARY OF THE EMPLOYEE");
    scanf("%d",&SAL);
    printf("PLEASE ENTER THE PERCENTAGE OF TRAVELLIING ALLOWANCE ON THE BASE SALARY OF THE EMPLOYEE");
    scanf("%f",&TA);
    printf("PLEASE ENTER THE PERCENTAGE OF DAILY ALLOWANCE ON THE BASE SALARY OF THE EMPLOYEE");
    scanf("%f",&DA);
    float NS;
    NS=SAL+((SAL*TA)/100)+((SAL*DA)/100);
    printf("THE NET SALARY OF THE EMPLOYEE IS:\n");
    printf("%f",NS);
    return 0;

}