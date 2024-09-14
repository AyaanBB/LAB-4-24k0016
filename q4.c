#include <stdio.h>

int main() {
    float c,r,b,h;
    
    printf("Enter 1 for triangle\nEnter 2 for circle\nEnter 3 for rectangle\n");
    scanf("%f",&c);
    
    //c is used to select different shapes
    
    if(c == 1)
    {
        printf("Enter base = ");
        scanf("%f",&b);
        printf("Enter height = ");
        scanf("%f",&h);
        
        printf("Area of triangle is %.1f", 0.5 * b * h);
    }
    else if(c == 2)
    {
        printf("Enter radius = ");
        scanf("%f",&r);
        
        printf("Area of circle is %.1f", 3.142 * r * r);
    }
    else if(c == 3)
    {
        printf("Enter base = ");
        scanf("%f",&b);
        printf("Enter height = ");
        scanf("%f",&h);
        
        printf("Area of rectangle is %.1f", b * h);
    }
    return 0;
}