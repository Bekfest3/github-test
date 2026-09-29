#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // Read a line of text including spaces
    printf("You entered: %s\n", str);

    //Accessing individual characters in a string
    printf("First character: %c\n", str[0]);

    //Looping through a string
    printf("Characters in the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);  
    }
}