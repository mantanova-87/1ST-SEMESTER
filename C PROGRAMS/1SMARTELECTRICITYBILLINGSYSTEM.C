#include<stdio.h>
int main()
{
    char CUST_TYPE;
    float UNI_CON;
    printf("Please enter 'D' if you are a DOMESTIC consumer and 'C' if you are a COMMERCIAL consumer:   ");
    scanf("%c",&CUST_TYPE);
    printf("Please enter the units of electricity consumed:   ");
    scanf("%f",&UNI_CON);
    if (CUST_TYPE=='D')
    {
        if (UNI_CON<=200)
        {
            float BILL;
            BILL=(UNI_CON)*2.5;
            printf("Base Bill: %f\n",BILL);
            printf("Surcharge Applied : NO\n");
            printf("Total Bill: %f\n",BILL);
        }
        else if (UNI_CON>200)
        {
            float BILL2;
            BILL2=(UNI_CON)*4;
            printf("Base Bill: %f\n",BILL2);
            printf("Surcharge Applied : NO\n");
            printf("Total Bill: %f\n",BILL2);
        }
    }
    else if (CUST_TYPE=='C')
    {
        if (UNI_CON<=200)
        {
            float BILL;
            BILL=(UNI_CON)*5;
            printf("Base Bill: %f\n",BILL);
            printf("Surcharge Applied : NO\n");
            printf("Total Bill: %f\n",BILL);
        }
        else if (UNI_CON>200)
        {
            float BILL2;
            BILL2=(UNI_CON)*6.5;
            printf("Base Bill: %f\n",BILL2);
            if (BILL2>2000)
            {
                float FB;
                FB=BILL2+((BILL2*15)/100);
                printf("Surcharge Applied : YES\n");
                printf("Final Bill(With 15 surcharge) : %f\n",FB);
            }
            else if (BILL2<=2000)
            {
                printf("Surcharge Applied : NO\n");
                printf("Final Bill : %f\n",BILL2);
                
            }
            
            
           
        }
        
    }
    

}