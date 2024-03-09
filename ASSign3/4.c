#include <stdio.h>

int main() {
    int n, digit;
    int seen = 0, not_seen = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        if (seen & (1 << digit)) {
            printf("Yes seen \n");
            return 0;
        }
        seen |= 1 << digit;
        n /= 10;
    }

    printf("No\n");
    return 0;
}
