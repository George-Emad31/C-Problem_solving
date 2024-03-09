#include <stdio.h>

// Function to replace an element in an array
void replaceElement(int arr[], int index, int element) {
    // Replace the element at the given index
    arr[index] = element;
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

    int element;
    printf("Enter the element to be replaced: ");
    scanf("%d", &element);

    int index;
    printf("Enter the index at which the element should be replaced: ");
    scanf("%d", &index);

    replaceElement(arr, index, element);

    printf("Array after replacing element at index %d with %d: ", index, element);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
