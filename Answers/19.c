#include <stdio.h>
#include <conio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

void main() {
    int num1, num2;
    int sum, difference, product;
    float division;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);
    difference = subtract(num1, num2);
    product = multiply(num1, num2);
    division = divide(num1, num2);

    printf("\nAddition: %d + %d = %d", num1, num2, sum);
    printf("\nSubtraction: %d - %d = %d", num1, num2, difference);
    printf("\nMultiplication: %d * %d = %d", num1, num2, product);
    printf("\nDivision: %d / %d = %.2f", num1, num2, division);

    getch();
}
