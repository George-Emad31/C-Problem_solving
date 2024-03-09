#include <stdio.h>

// Function to search for a number in an array
int searchNumber(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int number;
    printf("Enter the number you want to find: ");
    scanf("%d", &number);

    int index = searchNumber(arr, size, number);

    if ((index != -1)) {
        printf("The number was found at index %d\n", index);
    } else {
        printf("This number does not exist... :( try again.\n");
    }

    return 0;
}
