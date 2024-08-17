/*WAP which reads any two integer values from user and calculates sum,difference and product using switch case statement
©CZ ABHISHEK 2024*/
#include <stdio.h>
int main() {
int num1, num2, choice;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Choose an operation:\n");
    printf("1. Sum\n");
    printf("2. Difference\n");
    printf("3. Product\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("The sum of %d and %d is: %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("The difference of %d and %d is: %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("The product of %d and %d is: %d\n", num1, num2, num1 * num2);
            break;
        default:
            printf("Invalid choice. Please choose a valid operation (1/2/3).\n");
    }
    return 0;
}
