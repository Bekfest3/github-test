#include <stdio.h>
#include <stdlib.h>
int main(){
    // 1. Dynamic Memory Allocation using malloc
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    printf("Values in dynamically allocated memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    //Freeing memory to prevent memory leaks
    free(ptr);

    // 2. Dynamic Memory Allocation using calloc
    int *ptr2 = (int *)calloc(5, sizeof(int));
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Values in dynamically allocated memory using calloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    free(ptr2);
}