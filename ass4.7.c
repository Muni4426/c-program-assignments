#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data data;

    printf("Enter an integer or a floating point number: ");
    if (scanf("%d", &data.i) == 1) {
        printf("You entered an integer: %d\n", data.i);
    } else if (scanf("%f", &data.f) == 1) {
        printf("You entered a float: %.2f\n", data.f);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

