#include <stdio.h>

int main() {
    int a, b;
    
    //printf("Before swap: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b);

    return 0;
}
