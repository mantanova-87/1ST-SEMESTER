/*Q10. Write a program to check whether a number is Palindrome or not.;MANTAVYA KUMAR;02-10-2025*/
#include<stdio.h>
int main()
{
    int N, RV= 0, RM, OR;
    printf("ENTER THE NUMBER TO BE CHECKED FOR BEING PALINDROME : ");
    scanf("%d", &N);
    OR =N;
    while (N!= 0) 
    {
        RM=N% 10;
        RV = RV*10+RM;
        N/=10;
    }
    if (OR== RV)
        printf("%d IS A PALINDROME NUMBER.\n",OR);
    else
        printf("%d IS NOT A PALINDROME NUMBER.\n",OR);

    return 0;
}