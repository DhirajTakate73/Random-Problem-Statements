#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int product = 1; // Initialize the product to 1

    // Calculate the product of all digits in the number
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        product *= digit;
        temp /= 10;
    }

    printf("The product of all digits in the number is: %d\n", product);

    return 0;
}