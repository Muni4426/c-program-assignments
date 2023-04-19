#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int m, n, i, j;
    int matrix[MAX_SIZE][MAX_SIZE], transpose[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }


    printf("Transpose of the matrix:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

