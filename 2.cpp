/*WAP input any two numbers and display the largest one
©CZ ABHISHEK 2024 */
#include <stdio.h>

int main(){
    int num1, num2;

    printf("first number halnuhos: ");
    scanf("%d", &num1);

    printf("second number halnuhos: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
	
