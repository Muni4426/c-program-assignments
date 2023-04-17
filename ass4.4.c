#include <stdio.h>
#include <string.h>

struct Customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance_customers(struct Customer customers[], int num_customers);

int main() {
    int i, num_customers = 3;
    struct Customer customers[num_customers];

    // Accept customer details
    for (i = 0; i < num_customers; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account Number: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Print details of customers with low balance
    print_low_balance_customers(customers, num_customers);
    
    return 0;
}

void print_low_balance_customers(struct Customer customers[], int num_customers) {
    int i;
    printf("\nCustomers with low balance:\n");
    for (i = 0; i < num_customers; i++) {
        if (customers[i].balance < 100.0) {
            printf("Account Number: %d\n", customers[i].account_no);
            printf("Name: %s\n", customers[i].name);
        }
    }
}

