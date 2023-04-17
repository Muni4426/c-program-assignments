#include <stdio.h>


int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2, lcm, gcd_val;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    
    gcd_val = gcd(num1, num2);

    
    lcm = (num1 * num2) / gcd_val;
    
    printf("GCD of %d and %d is %d\n", num1, num2, gcd_val);
    printf("LCM of %d and %d is %d", num1, num2, lcm);
    
    return 0;
}

