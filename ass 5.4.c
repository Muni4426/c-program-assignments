#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i, j, k;
    float A[MAX_SIZE][MAX_SIZE], adj[MAX_SIZE][MAX_SIZE], det, inv[MAX_SIZE][MAX_SIZE];


    printf("Enter the size of the matrix: ");
    scanf("%d", &n);


    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%f", &A[i][j]);
        }
    }


    det = 0;
    for (i = 0; i < n; i++) {
        det = det + (A[0][i] * (A[1][(i + 1) % n] * A[2][(i + 2) % n] - A[1][(i + 2) % n] * A[2][(i + 1) % n]));
    }

    if (det == 0) {
        printf("The matrix is singular, and its inverse does not exist.\n");
        return 0;
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            adj[i][j] = ((A[(j + 1) % n][(i + 1) % n] * A[(j + 2) % n][(i + 2) % n]) - (A[(j + 1) % n][(i + 2) % n] * A[(j + 2) % n][(i + 1) % n])) / det;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            inv[i][j] = adj[i][j];
        }
    }


    printf("The inverse of the matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%f ", inv[i][j]);
        }
        printf("\n");
    }

    return 0;
}

