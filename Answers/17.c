#include <stdio.h>
#include <conio.h>

void main() {
    int n, i, arr[1000];
    int evenCount = 0, oddCount = 0;
    
    clrscr();
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements of the array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    
    getch();
}
