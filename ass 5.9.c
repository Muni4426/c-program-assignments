#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i, j;
    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);


    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    int is_symmetric = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0;
                break;
            }
        }
        if (is_symmetric == 0) {
            break;
        }
    }


    if (is_symmetric == 1) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

