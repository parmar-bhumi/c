#include <stdio.h>

union MultiType {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    union MultiType myUnion;

    printf("Enter an integer value: ");
    scanf("%d", &myUnion.intValue);

    printf("Enter a floating-point value: ");
    scanf("%f", &myUnion.floatValue);

    printf("Enter a string value (up to 19 characters): ");
    scanf("%s", myUnion.stringValue);

    printf("\nValues stored in the union:\n");
    printf("Integer Value: %d\n", myUnion.intValue);
    printf("Floating-point Value: %f\n", myUnion.floatValue);
    printf("String Value: %s\n", myUnion.stringValue);

    return 0;
}

