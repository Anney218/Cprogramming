#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input elements into the array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Remove duplicates from the array
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ) {
            if (array[i] == array[j]) {
                // If a duplicate is found, shift elements to the left
                for (int k = j; k < size - 1; k++) {
                    array[k] = array[k + 1];
                }
                size--; // Decrease the size of the array
            } else {
                j++; // Move to the next element
            }
        }
    }

    // Display the array without duplicates
    printf("Array without duplicates:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
