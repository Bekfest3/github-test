#include <stdio.h>
#include "math_help.h"
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d + 1 = %d\n",a,add_one(a));
    printf("%d - 1 = %d\n",a,subtract_one(a));
    printf("%d * 2 = %d\n",a,multiply_by_two(a));
    return 0;
}