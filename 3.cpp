/*WAP to find the largest number among three input number
©CZ ABHISHEK 2024 */
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("pahilo number halnuhos: ");
    scanf("%d", &num1);
    printf("doshro number halnuhos: ");
    scanf("%d", &num2);
    printf("teshro number halnuhos: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("The largest number is: %d\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("The largest number is: %d\n", num3);
    } else {
        printf("All numbers are equal.\n");
    }
    return 0;
}
