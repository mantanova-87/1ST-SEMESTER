/*8. Two numbers are input through the keyboard into location c and d. WAP to interchange the contents of c and d 
without using a third variable
MANTAVYA KUMAR;24-09-2025*/
#include <stdio.h>
int main(){
    int C,D;
    printf("ENTER THE NUMBER TO BE STORED IN LOCATION c: ");
    scanf("%d",  &C);
    printf("ENTER THE NUMBER TO BE STORED IN LOCATION d: ");
    scanf("%d",  &D);
    C=C+D;
    D=C-D;
    C=C-D;
    printf("NUMBERS AFTER SWAP ARE\n");
    printf("%d\n", C);
    printf("%d ",D);
    return 0;
}