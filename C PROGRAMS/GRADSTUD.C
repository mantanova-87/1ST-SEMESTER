#include<stdio.h>
int main(){
    printf("ENTER THE AVERAGE MARKS OF THE STUDENT\n");
    float AVG_MKS;
    
    scanf("%f",&AVG_MKS);
    if (AVG_MKS>100 || AVG_MKS<0)
    {
        printf("INVALID INPUT");
    }
    
    else if (AVG_MKS>=80 && AVG_MKS<=100)
    {
        printf("YOUR GRADE IS HONOURS");
    }
    else if (AVG_MKS>=60 && AVG_MKS<=79)
    {
        printf("YOUR GRADE IS FIRST DIVISION");
        
    }
    else if (AVG_MKS>=50 && AVG_MKS<=59)
    {
       printf("YOUR GRADE IS SECOND DIVISION");
    }
    else if (AVG_MKS>=40 && AVG_MKS<=49)
    {
        printf("YOUR GRADE IS THIRD DIVISION");
    }
    else if (AVG_MKS<=39)
    {
        printf("YOUR HAVE FAILED");
    }
    return 0;
    
    
     
    
    


}