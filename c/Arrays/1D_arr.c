#include <stdio.h>
#define size 5
int stack[size];
int top = -1;
int push(int value) {
    if (top == size - 1) {
        printf("Stack is full\n");
        return -1;
    }
    top++;
    stack[top] = value;
    return 0;
}

int pop(void) {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int main(void) {

    // 1. Storing multiple values of the same datatype
    int arr[5] = {5, 2, 8, 1, 3};
    char arr2[5] = {'a', 'b', 'c', 'd', 'e'};
    float arr3[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    double arr4[5] = {1.11, 2.22, 3.33, 4.44, 5.55};

    // 2. Search for a value in an array (Linear Search)
    int search = 3;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            printf("Value %d found at index %d\n", search, i);
            break;
        }
    }

    // 3. Sorting numbers in an array (Selection Sort)
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // 4. Stacking and unstacking values
    push(1);
    push(2);
    push(3);

    printf("Popped value: %d\n", pop());
    printf("Popped value: %d\n", pop());

    return 0;
}