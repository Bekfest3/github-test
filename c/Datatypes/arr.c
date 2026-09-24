#include <stdio.h>
int main(){
    printf("Array datatype stores multiple values of same datatype and outputted using %d,%f etc\n");

    //Example
    int arr[5] = {1,2,3};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    //Or using loop
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}