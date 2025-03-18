#include <stdio.h>

int fibonacciSeries(int n) {
    if (n <= 2) return 1;
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Fibonacci(%d) = %d\n", n, fibonacciSeries(n));
    return 0;
}
