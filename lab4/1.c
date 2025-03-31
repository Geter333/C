#include <stdio.h>
#include <math.h>

int main() {
    // 1. Обчислення ціни гри зі знижкою
    int original_price = 450;
    int discount = 15;
    int discounted_price = original_price * (100 - discount) / 100;
    printf("Discounted price: %d UAH\n", discounted_price);

    // 2. Обчислення віку людини
    int birth_year, current_year;
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    printf("Enter the current year: ");
    scanf("%d", &current_year);
    printf("Your age: %d years\n", current_year - birth_year);

    // 3. Обчислення Евклідової відстані
    double x1, y1, x2, y2, distance;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Euclidean distance: %.2f\n", distance);

    // 4. Обчислення кінцевої вартості товару зі знижкою
    double price, discount_percent, final_price;
    printf("Enter the price of the product: ");
    scanf("%lf", &price);
    printf("Enter discount percentage: ");
    scanf("%lf", &discount_percent);
    final_price = price * (100 - discount_percent) / 100;
    printf("Final price: %.2f UAH\n", final_price);

    // 5. Обчислення суми цифр трицифрового числа
    int number, sum_of_digits;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    sum_of_digits = (number / 100) + ((number / 10) % 10) + (number % 10);
    printf("Sum of digits: %d\n", sum_of_digits);

    return 0;
}
