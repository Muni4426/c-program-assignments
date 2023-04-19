#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n], matrix2[m][n], result[m][n];

    printf("Enter the elements of first matrix:\n");

    // taking input for first matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");

    // taking input for second matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // subtracting the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // printing the result
    printf("Resultant matrix after subtraction:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

