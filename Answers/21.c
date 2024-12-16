#include <stdio.h>
#include <conio.h>

#define MAX 10

void main() {
    int m, n, i, j;
    int arr1[MAX][MAX], arr2[MAX][MAX], result[MAX][MAX];

    clrscr();

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nThe resulting matrix after addition is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    getch();
}
