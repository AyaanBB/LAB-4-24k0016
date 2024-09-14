#include <stdio.h>
int main()
{
   int a,b;


   char operands;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf(" %c",&operands);

   
   switch(operands)
   {
     case '+':
             printf("The sum is %d", a + b);
             break;
     case '-': 
             printf("The difference is %d", a - b);
             break;
     case '*':
             printf("The product is %d", a * b);
             break;
     case '/':
             printf("The division is %d", a / b);
             break;
     default:
             printf("Enter correct input"); 		
    }
    return 0;
}