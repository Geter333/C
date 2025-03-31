#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    
    int quotient = num1 / num2;
    int remainder = num1 % num2;
    
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    
    return 0;
}
