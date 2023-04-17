#include <stdio.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int i, n;
    struct Employee employees[50];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Accept employee details
    for (i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Name: ");
        scanf("%s", employees[i].ename);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find employee with highest salary
    int max_index = 0;
    for (i = 1; i < n; i++) {
        if (employees[i].salary > employees[max_index].salary) {
            max_index = i;
        }
    }

    // Display details of employee with highest salary
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee Number: %d\n", employees[max_index].eno);
    printf("Name: %s\n", employees[max_index].ename);
    printf("Salary: %.2f\n", employees[max_index].salary);

    return 0;
}

