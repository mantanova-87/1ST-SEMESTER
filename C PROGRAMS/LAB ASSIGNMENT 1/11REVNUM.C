/*11. If a 5-digit number is input through the keyboard, then write a program to reverse the number. 
MANTAVYA KUMAR;01-09-2025*/
#include<stdio.h>
int main(){
    int A;
    printf("ENTER THE FIVE DIGIT NUMBER TO BE REVERSED: ");
    scanf("%d",&A);
    int REV;
    REV=(A%10)*10000+((A%100)-(A%10))*100+((A%1000)-(A%100))*1+((A%10000)-(A%1000))/100+(A/10000);
    printf("THE NUMBER AFTER THE REVERSAL IS: %d",REV);
    return 0;
}