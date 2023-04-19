#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i, j;
    int unit[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the unit matrix: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                unit[i][j] = 1;
            } else {
                unit[i][j] = 0;
            }
        }
    }


    printf("The unit matrix of size %d x %d is:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", unit[i][j]);
        }
        printf("\n");
    }

    return 0;
}

