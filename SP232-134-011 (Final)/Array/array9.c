
#include <stdio.h>

int main() {
    int size, rotateBy;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input elements into the array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input the number of positions to rotate by
    printf("Enter the number of positions to rotate by: ");
    scanf("%d", &rotateBy);

    // Rotate the array to the right
    for (int i = 0; i < rotateBy; i++) {
        int lastElement = array[size - 1];
        // Shift elements to the right
        for (int j = size - 1; j > 0; j--) {
            array[j] = array[j - 1];
        }
        array[0] = lastElement;
    }

    // Display the rotated array
    printf("Rotated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
