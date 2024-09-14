#include <stdio.h>

int main() {
    float id,units,charges,amount;
    char name;
    
    printf("ID = ");
    scanf("%f",&id);

    printf("Units = ");
    scanf("%f",&units);

    printf("Name = ");
    scanf(" %c",&name);
    
    printf("Customer ID: %.1f\n", id);
    printf("Customer Name: %c\n", name);
    printf("Units Consumed: %.1f\n", units);
    
    amount = units * charges;
    
    if(units <= 199)
    {
        amount = units * 16.2;
        printf("Amount Charges @Rs. 16.20 per unit: %.1f\n", units * 16.20);
        
    }
    else if(units >= 200 && units < 300)
    {
        amount = units * 20.1;
        printf("Amount Charges @Rs. 20.10 per unit: %.1f\n", units * 20.10);
    }
    else if(units >= 300 && units < 500)
    {
        amount = units * 27.1;
        printf("Amount Charges @Rs. 27.10 per unit: %.1f\n", units * 27.10);
    }
    
    amount = units * 35.9;

    if(units >= 500 && amount <= 18000)
    {
        printf("Amount Charges @Rs. 35.90 per unit: %.1f\n", units * 35.90);
    }
    else if(units >= 500 && amount > 18000)
    {
        printf("Amount Charges @Rs. 35.90 per unit: %.1f\n", units * 35.90);
        printf("Surcharge is %.1f\n", units * 35.90 * 0.15);
        printf("Net Amount Paid by the Customer: %.1f", units * 35.90 * 1.15);
    }

    return 0;
}