#include <stdio.h>

int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Generate Fibonacci series
    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%llu ", first);
        } else if (i == 1) {
            printf("%llu ", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf("%llu ", next);
        }
    }

    printf("\n");

    return 0;
}
