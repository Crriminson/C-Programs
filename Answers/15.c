#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c;
    int largest, smallest;
    
    clrscr();
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    
    smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    
    printf("\nLargest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    
    getch();
}
