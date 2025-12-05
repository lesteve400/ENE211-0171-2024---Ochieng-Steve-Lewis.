#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length;

    printf("Enter your name: ");
    scanf("%s", name); //Reads one word

    printf("You entered: %s\n", name);

    length = strlen(name);

    printf("Length of the string = %d\n", length);

    return 0;
}
