#include <stdio.h>
int main(void) {
    // 1. Storing multiple values of the same datatype in a 2D array(Matrix)
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 2. Accessing elements in a 2D array
    printf("Element at row 1, column 2: %d\n", arr[0][1]);
    // 3. Iterating through a 2D array
    printf("Elements in the 2D array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}