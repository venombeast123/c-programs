#include <stdio.h>

int main()
{
    char ch;
    
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    
   
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') 
        ? printf("It is ALPHABET")
        : printf("It is NOT ALPHABET");

    return 0;
} ^= num1;
    num1 ^= num2;

    printf("Num1 after swapping = %d\n", num1);
    printf("Num2 after swapping = %d\n", num2);

    return 0;
}