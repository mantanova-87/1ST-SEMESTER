/*Q3.  Write a program to produce the following output: 
                        1
                    1       1
                1       2       1
            1       3       3       1
        1       4       6       4       1    
MANTAVYA KUMAR;26-09-2025*/
#include <stdio.h>
int main() {
    int A, B, C, D;
    printf("ENTER THE NUMBER OF ROWS YOU WANT IN YOUR PASCAL'S TRIANLE :");
    scanf("%d",&D);
    for (A = 0; A < D; A++) 
    {
        for (B = 0; B < D - A - 1; B++) 
        {
            printf("  ");
        }

        C = 1;
        for (B = 0; B <= A; B++) 
        {
            printf("%4d", C);
            C = C * (A - B) / (B + 1);
        }

        printf("\n");
    }

    return 0;
}

