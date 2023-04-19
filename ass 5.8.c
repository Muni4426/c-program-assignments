#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i, j;
    int identity[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the identity matrix: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                identity[i][j] = 1;
            } else {
                identity[i][j] = 0;
            }
        }
    }


    printf("The identity matrix of size %d x %d is:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", identity[i][j]);
        }
        printf("\n");
    }

    return 0;
}

