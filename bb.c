#include <stdio.h>

int main() {
    char c;

    
    printf("Enter a character ");
    scanf("%c", &c);

    if ((c == 65 || c == 69 || c == 73 || c == 79 || c == 85) ||  
        (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)) 
    {
        printf("%c is a vowel\n", c);
    }
    
    else if (c >= 48 && c <= 57) 
    {
        printf("%c is a digit\n", c);
    }
    
    else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) 
    { 
        printf("%c is a consonant.\n", c);
    }

    else
    {
        printf("%c is a special character", c);
    }

    return 0;
}
