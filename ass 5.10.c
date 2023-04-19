#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i, j;
    int matrix[MAX_SIZE][MAX_SIZE];
    int sum = 0;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);


    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }


    printf("The sum of diagonal elements is %d.\n", sum);

    return 0;
}

