#include <stdio.h>

int main() {
    int x = 5;
    int a = x++;  // a = 5, x = 6
    int b = ++x;  // x = 7, b = 7
    int c = x;    // c = 7

    printf("%d %d %d\n", a, b, c);
    return 0;
}
