#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters and convert to lowercase
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        } else {
            start++;
            end--;
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
