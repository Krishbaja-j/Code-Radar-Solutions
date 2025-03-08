#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Create a mask with MSB set (for 32-bit integer)
    int msbMask = 1 << 31;

    if (num & msbMask)
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
