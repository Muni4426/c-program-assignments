#include <stdio.h>

int main() {
    int num, sum = 0,i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    for(i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    
    if(sum == num && num != 1) {
        printf("%d is a perfect composite number.", num);
    } else {
        printf("%d is not a perfect composite number.", num);
    }
    
    return 0;
}

