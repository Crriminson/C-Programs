#include <stdio.h>
#include <conio.h>

void main() {
    int m, n, i, j;
    int arr[100][100];

    clrscr();

    // Get the dimensions of the 2D array from the user
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Input values into the 2D array
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
	for (j = 0; j < n; j++) {
	    printf("Enter element at [%d][%d]: ", i + 1, j + 1);
	    scanf("%d", &arr[i][j]);
	}
    }

    // Display the 2D array in matrix format
    printf("\nThe matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    getch();
}
