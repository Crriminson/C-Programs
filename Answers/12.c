#include <stdio.h>
#include <conio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_lcm(int a, int b) {
    return (a * b) / find_gcd(a, b);
}

int main() {
    int num1, num2;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, find_gcd(num1, num2));
    printf("LCM of %d and %d is: %d\n", num1, num2, find_lcm(num1, num2));
    
    getch();
    
    return 0;
}
