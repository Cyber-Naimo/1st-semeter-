#include <stdio.h>
int main() {  
    char c;
    printf("Enter a alphabet: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a alphabet
    // %c displays the actual character
    printf("ASCII value of %c = %d", c,c);
    
    return 0;
}
