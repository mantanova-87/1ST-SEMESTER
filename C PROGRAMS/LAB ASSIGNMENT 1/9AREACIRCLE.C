/*9. WAP for area of a circle. 
MANTAVYA KUMAR;24-09-2025*/
#include<stdio.h>
#include<math.h>
int main(){
    float R,A;
    printf("PLEASE ENTER THE RADIUS(IN METRES) OF THE CIRCLE TO FIND ITS AREA : ");
    scanf("%f",&R);
    A=M_PI*(pow(R,2));
    printf("THE AREA(IN SQUARE METRES) OF THE CIRCLE WITH THE ENTERED RADIUS IS: %f",A);
    return 0;
}