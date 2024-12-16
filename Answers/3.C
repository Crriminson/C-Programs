#include <stdio.h>
#include <conio.h>

int main() {
    int num1, num2;

    clrscr();

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Relational Operators
    printf("Relational Operators:\n");
    printf("%d == %d : %d\n", num1, num2, num1 == num2);
    printf("%d != %d : %d\n", num1, num2, num1 != num2);
    printf("%d > %d : %d\n", num1, num2, num1 > num2);
    printf("%d < %d : %d\n", num1, num2, num1 < num2);
    printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d : %d\n", num1, num2, num1 <= num2);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("%d & %d : %d\n", num1, num2, num1 & num2);
    printf("%d | %d : %d\n", num1, num2, num1 | num2);
    printf("%d ^ %d : %d\n", num1, num2, num1 ^ num2);
    printf("~%d : %d\n", num1, ~num1);
    printf("~%d : %d\n", num2, ~num2);
    printf("%d << 1 : %d\n", num1, num1 << 1);
    printf("%d >> 1 : %d\n", num1, num1 >> 1);
    printf("%d << 1 : %d\n", num2, num2 << 1);
    printf("%d >> 1 : %d\n", num2, num2 >> 1);

    getch();

    return 0;
}
