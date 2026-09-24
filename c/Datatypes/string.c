#include <stdio.h>
int main(){
    printf("No string datatype in C, but can use array of char to store string and outputted using \"%%s\" \n");

    //Example
    char arr[5] = {'A','B','C'}; // Or char arr[5] = "ABC";
    printf("%c\n",arr[0]);
    printf("%c\n",arr[1]);
    printf("%c\n",arr[2]);
    //Or using loop
    for(int i=0;i<3;i++){
        printf("%c\n",arr[i]);
    }
    //Or using %s
    printf("%s\n",arr);
    return 0;
}