#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    swap(&num1, &num2);

    printf("\nAfter swapping:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    return 0;
}
