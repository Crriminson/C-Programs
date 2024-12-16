#include <stdio.h>
#include <conio.h>

void main() {
    int n, first = 0, second = 1, next, i;

    clrscr();
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series up to %d terms: \n", n);
    
    // Print the first two terms
    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }
    
    // Calculate and print the next terms in the Fibonacci series
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    
    getch();
}
