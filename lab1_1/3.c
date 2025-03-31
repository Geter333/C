#include <stdio.h>
#include <ctype.h>

int count_vowels(const char *str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);  // Перетворюємо літеру у нижній регістр
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    printf("Number of vowels: %d\n", count_vowels(input));
    return 0;
}
