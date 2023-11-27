#include <stdio.h>
#include <ctype.h>

int isValidString(const char *str) {
    while (*str) {
        if (!isalpha(*str)) {
            return 0; 
        }
        str++;
    }
    return 1;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isValidString(inputString)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }

    return 0;
}
