#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, j, count, arr[1000];

    clrscr();

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are:\n");

    for (i = 0; i < n; i++) {
        count = 0;
        
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    getch();
    
    return 0;
}
