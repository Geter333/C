#include <stdio.h>

int main() {
    // 1. Ділення двох цілих чисел з виведенням результату у форматі float
    int a = 5, b = 2;
    float result = (float)a / b;
    printf("Division result: %.2f\n", result);

    // 2. Оголошення константної змінної float і виведення її значення
    const float PI = 3.14;
    printf("Constant PI: %.2f\n", PI);

    // 3. Введення символу та виведення його ASCII-коду
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("ASCII code of the character: %d\n", c);

    // 4. Введення цілого і дробового числа, виведення їх суми
    int intNum;
    float floatNum;
    printf("Enter an integer: ");
    scanf("%d", &intNum);
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNum);
    printf("Sum: %.2f\n", intNum + floatNum);

    // 5. Введення символу і виведення наступного символу у таблиці ASCII
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Next character: %c\n", ch + 1);

    return 0;
}
