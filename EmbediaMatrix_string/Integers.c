#include <stdio.h>

// Function to calculate power
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a matrix is an Embedia Power Matrix
int isEmbediaPowerMatrix(int matrix[3][3]) {
    for (int i = 1; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != power(matrix[i+1][j], matrix[i-1][j])) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int matrix[3][3];

    printf("Input number in the matrix row by row \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix is: \n\n");

    for (int i = 0; i < 3; i++) {
        printf("\t\t     |     |     \n");
        printf("\t\t  %d  |  %d  |  %d  \n", matrix[i][0], matrix[i][1], matrix[i][2]);
        printf("\t\t_____|_____|_____\n");
    }

    printf("%s\n", isEmbediaPowerMatrix(matrix) ? "Embedia Power Matrix" : "Not an Embedia Power Matrix");

    return 0;
}
