#include <stdio.h>

int main() {
    char str[50];
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a string: ");
    getchar(); // Очищення буфера перед fgets
    fgets(str, sizeof(str), stdin);

    printf("Number: %d, String: %s", num, str);
    return 0;
}
