#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nsp = n / 2;      // number of spaces
    int nst = 1;          // number of stars
    int ml = n / 2 + 1;   // middle line

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= nst; k++) {
            printf("*");
        }
        // Update values for next line
        if (i < ml) {
            nsp--;
            nst += 2;
        } else {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }

    return 0;
}
