/*
 * Embedia Matrix
 *
 *  Created on: Jan 9, 2023
 *      Author: George Emad
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to calculate power
long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a matrix is an Embedia Power Matrix
int isEmbediaPowerMatrix(char* matrix[3][3]) {
    for (int j = 0; j < 3; j++) {
        if (atoll(matrix[1][j]) != power(atoll(matrix[2][j]), atoll(matrix[0][j]))) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char* matrix[3][3];

    printf("Input number in the matrix row by row \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = malloc(20 * sizeof(char)); // Allocate memory for each string
            scanf("%s", matrix[i][j]);
        }
    }

    printf("Matrix is: \n\n");

    for (int i = 0; i < 3; i++) {
        printf("\t\t       |       |       \n");
        printf("\t\t'%-6s' | '%-6s' | '%-6s'\n", matrix[i][0], matrix[i][1], matrix[i][2]);
        printf("\t\t_______|_______|_______\n");
    }

    printf("%s\n", isEmbediaPowerMatrix(matrix) ? "Embedia Power Matrix" : "Not an Embedia Power Matrix");

    // Free the allocated memory
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            free(matrix[i][j]);
        }
    }

    return 0;
}
