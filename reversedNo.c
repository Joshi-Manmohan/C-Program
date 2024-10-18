#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the digits
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}
