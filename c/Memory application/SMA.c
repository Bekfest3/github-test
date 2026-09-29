#include <stdio.h>
//Global variable declaration
int global_var = 10; // Global variable
void test_print() {
    printf("Global variable: %d\n", global_var);
}
int main(){
    printf("Global variable: %d\n", global_var);
    test_print();

    //Static variable declaration
    static int static_var = 5; // Static variable
    printf("Static variable: %d\n", static_var);
    return 0;
}