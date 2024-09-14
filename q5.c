#include <stdio.h>

int main() 
{
    float c,temp;
    char u;
    printf("Enter 1 for Celcius\nEnter 2 for Kelvin\nEnter 3 for Fahrenheit\n");
    scanf("%f",&c);

    //scanf is used two times to clear memory	

    scanf("%c",&u);
    printf("Enter unit you want to convert into = ");
    scanf("%c",&u);
    
    //c is used to select different shapes
    
    if(c == 1 && u == 'k')
    {
        printf("Celsius = ");
        scanf("%f",&temp);
        
        printf("Conversion is %.2f", temp + 273.15);
    }
         else if(c == 1 && u == 'f')
         {
          printf("Celcius = ");
          scanf("%f",&temp);
          
          printf("Conversion is %.2f", (temp * 1.8) + 32);
         }    
    else if(c == 2 && u == 'c')
    {
        printf("Kelvin = ");
        scanf("%f",&temp);
        
        printf("Conversion is %.2f", temp - 273.15);
    }    
         else if(c == 2 && u == 'f')
         {
          printf("Kelvin = ");
          scanf("%f",&temp);
          
          printf("Conversion is %.2f",  (temp - 273.15) * 1.8 + 32);
         }
    
    else if(c == 3 && u == 'c')
    {
        printf("Fahrenheit = ");
        scanf("%f",&temp);
        
        printf("Conversion is %.2f", (temp - 32) * 5/9);
    }
         else if(c == 3 && u == 'k')
         {
          printf("Fahrenheit = ");
          scanf("%f",&temp);
          
          printf("Conversion is %.2f", (temp - 32) * 5/9 + 273.15);
         }
    return 0;
}