#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2, num3;
    clrscr();
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Check if num3 is between num1 and num2
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("The third number %d is between %d and %d.\n", num3, num1, num2);
    } else {
        printf("The third number %d is NOT between %d and %d.\n", num3, num1, num2);
    }
    getch();
    return 0;
}
