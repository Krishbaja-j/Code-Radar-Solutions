#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    if (x * x + y * y == z * z) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
    
    return 0;
}
