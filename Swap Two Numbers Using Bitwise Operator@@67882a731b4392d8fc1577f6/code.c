#include <stdio.h>

int main() {
    int a , b;

    printf("%d, %d", a, b);

    a = a ^ b;  // Step 1: a now holds a ^ b
    b = a ^ b;  // Step 2: b = (a ^ b) ^ b = a
    a = a ^ b;  // Step 3: a = (a ^ b) ^ a = b

    printf("%d, %d", a, b);

    return 0;
}
