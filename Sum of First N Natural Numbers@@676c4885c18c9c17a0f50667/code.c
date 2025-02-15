#include <stdio.h>
int main() {
    int N, sum = 0;

    scanf("%d", &N);

    // Loop to calculate sum
    for(int i = 1; i <= N; i++) {
        sum += i;  // Adding numbers from 1 to N
    }

    // Displaying the result
    printf("%d\n", N, sum);
    
    return 0;
}
