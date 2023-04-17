#include <stdio.h>

#define PI 3.14159265359

union Shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union Shape shape;
    char shape_type;

    printf("Enter shape (c for circle, r for rectangle): ");
    scanf("%c", &shape_type);

    if (shape_type == 'c') {
        printf("Enter radius: ");
        scanf("%f", &shape.radius);

        float area = PI * shape.radius * shape.radius;
        printf("Area of circle with radius %.2f: %.2f\n", shape.radius, area);
    }
    else if (shape_type == 'r') {
        printf("Enter length: ");
        scanf("%f", &shape.rectangle.length);

        printf("Enter width: ");
        scanf("%f", &shape.rectangle.width);

        float area = shape.rectangle.length * shape.rectangle.width;
        printf("Area of rectangle with length %.2f and width %.2f: %.2f\n", shape.rectangle.length, shape.rectangle.width, area);
    }
    else {
        printf("Invalid shape entered.\n");
    }

    return 0;
}

