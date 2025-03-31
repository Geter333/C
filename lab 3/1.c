#include <stdio.h>
#include <math.h>

int main() {
    // 1. Перетворення метрів у сантиметри і міліметри
    double meters;
    printf("Enter length in meters: ");
    scanf("%lf", &meters);
    printf("%.2f m = %.2f cm = %.2f mm\n", meters, meters * 100, meters * 1000);

    // 2. Обчислення площі кола
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = M_PI * radius * radius;
    printf("Circle area: %.2f\n", area);

    // 3. Конвертація секунд у години, хвилини та секунди
    int seconds, hours, minutes, remaining_seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remaining_seconds = seconds % 60;
    printf("%d seconds = %d hours %d minutes %d seconds\n", seconds, hours, minutes, remaining_seconds);

    // 4. Перевірка, чи є число парним
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }

    // 5. Перетворення малої літери у велику
    char letter;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &letter);
    printf("Uppercase letter: %c\n", letter - 32);

    return 0;
}