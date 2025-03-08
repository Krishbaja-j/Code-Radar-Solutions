#include <stdio.h>

int getMSB(int num) {
    int msb = 0; // Initialize MSB
    while (num > 1) {
        num >>= 1;  // Right shift the number
        msb++;      // Increment MSB position
    }
    return 1 << msb; // Return the value of the MSB
}

int main() {
    int num;
    scanf("%d",&num); // Example number
    printf("Set", getMSB(num));
    return 0;
}
