#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Assuming the maximum length of the string is 100 characters
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    // Remove newline character from fgets input if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char reversed[len + 1];  // Array to store the reversed string

    // Reverse the string
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';  // Null-terminate the reversed string

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);

    return 0;
}
