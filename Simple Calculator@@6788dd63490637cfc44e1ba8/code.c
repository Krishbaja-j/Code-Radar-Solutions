#include <stdio.h>
int main() {
    int x, y;
    char z;
    scanf("%d %d", &x, &y);
    getchar(); // to consume the newline character after the integers
    scanf("%c", &z);
    if (z == '+') {
        printf("%d\n", x + y);
    } else if (z == '-') {
        printf("%d\n", x - y);
    } else if (z == '*') {
        printf("%d\n", x * y);
    } else if (z == '/') {
        if (y != 0) {
            printf("%d\n", x / y);
        } else {
            printf("error\n");
        }
    } else {
        printf("Invalid operation.\n");
    }
    return 0;
}
