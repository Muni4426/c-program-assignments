#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int m, n, i, j;
    int null[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of rows and columns of the null matrix: ");
    scanf("%d %d", &m, &n);


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            null[i][j] = 0;
        }
    }


    printf("The null matrix of size %d x %d is:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", null[i][j]);
        }
        printf("\n");
    }

    return 0;
}

