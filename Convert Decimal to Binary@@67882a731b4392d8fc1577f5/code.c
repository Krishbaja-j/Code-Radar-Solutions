#include <stdio.h>

int main() {
    int num, i;
    int binary[32];

    scanf("%d", &num);

    if (num == 0) {
        printf("Binary equivalent: 0");
        return 0;
    }

    for (i = 0; num > 0; i++) {
        binary[i] = num % 2;
        num = num / 2;
    }

    //printf("Binary equivalent: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
