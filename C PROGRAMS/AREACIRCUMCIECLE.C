/*MANTAVYA KUMAR;31-08-2025;CIRCLE FORMULA*/
#include<stdio.h>
int main(){
    float R,AR,CF;
    printf("ENTER THE RADIUS OF CIRCLE IN METRES");
    scanf("%f",&R);
    AR=3.14*R*R;
    CF=2*3.14*R;
    printf("AREA OF CIRCLE IS\n");
    printf("%f",AR);
    printf(" SQUARE METRES\nCIRCUMFERENCE OF THE CIRCLE IS\n");
    printf("%f",CF);
    printf(" METRES");
    return 0;
}