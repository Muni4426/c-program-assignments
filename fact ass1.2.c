#include <stdio.h>

int factorial(int n);

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Error: Enter a non-negative integer\n");
        return 0;
    }
    int result = factorial(num);
    printf("%d! = %d\n", num, result);
    return 0;
}

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

