/*
The user is asked to enter a number n.
The for loop iterates from 1 to n.
In each iteration, the current number i is added to the sum.
After the loop finishes execution, the total sum is printed in the format “Sum of numbers from 1 to n = sum.”
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of numbers from 1 to %d = %d.\n", n, sum);
    return 0;
}
