#include <stdio.h>

int main() {
    float d,am;
    
    //d = discount, am = actual amount
    
    printf("Amount = ");
    scanf("%f",&am);
    
    if(am < 2000 && am >= 500)
    {
        d = 0.05;
        printf(" Actual amount is %.1f\n", am);
        printf("The saved amount is %.1f\n", am * d);
        printf("The amount after discount is %.1f", am - (am * d));
    }
    else if(am >= 2000 && am < 4000)
    {
        d = 0.1;
        printf(" Actual amount is %.1f\n", am);
        printf("The saved amount is %.1f\n", am * d);
        printf("The amount after discount is %.1f", am - (am * d));
    }
    else if(am >= 4000 && am <= 6000)
    {
        d = 0.2;
        printf(" Actual amount is %.1f\n", am);
        printf("The saved amount is %.1f\n", am * d);
        printf("The amount after discount is %.1f", am - (am * d));
    }
    else if(am > 6000)
    {
        d = 0.35;
        printf(" Actual amount is %.1f\n", am);
        printf("The saved amount is %.1f\n", am * d);
        printf("The amount after discount is %.1f", am - (am * d));
    }
    else if(am < 500)
    {
        printf("No discounts");
    }
    
    return 0;
    
}