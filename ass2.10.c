#include <stdio.h>

Int main() {
    Int arr[5] = {12, 56, 34, 78, 100};
    Int n = 5;
    Int max = arr[0];
    
    For (int I = 1; I < n; i++) {
        If (arr[i] > max) {
            Max = arr[i];
        }
    }
    
    Printf(“The largest element in the array is: %d”, max);
    
    Return 0;
}

