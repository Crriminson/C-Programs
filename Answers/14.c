#include <stdio.h>
#include <conio.h>

void main() {
    int x, y;
    
    clrscr();
    
    // Taking input for two integers x and y
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    
    // Relational Operations
    printf("\nRelational Operations:\n");
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x > y: %d\n", x > y);
    printf("x < y: %d\n", x < y);
    printf("x >= y: %d\n", x >= y);
    printf("x <= y: %d\n", x <= y);
    
    // Logical Operations
    printf("\nLogical Operations:\n");
    printf("x && y: %d\n", x && y);
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);
    printf("!y: %d\n", !y);
    
    // Bitwise Operations
    printf("\nBitwise Operations:\n");
    printf("x & y: %d\n", x & y);
    printf("x | y: %d\n", x | y);
    printf("x ^ y: %d\n", x ^ y);
    printf("~x: %d\n", ~x);
    printf("~y: %d\n", ~y);
    printf("x << 1: %d\n", x << 1);
    printf("x >> 1: %d\n", x >> 1);
    
    getch();
}
