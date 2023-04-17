#include <stdio.h>

Int main() {
    Int arr[] = {2, 5, 7, 10, 12, 15};
    Int n = sizeof(arr) / sizeof(arr[0]);
    Int even[n], odd[n];
    Int even_count = 0, odd_count = 0;

    // loop through the array
    For (int I = 0; I < n; i++) {
        If (arr[i] % 2 == 0) {
            Even[even_count] = arr[i];
            Even_count++;
        } else {
            Odd[odd_count] = arr[i];
            Odd_count++;
        }
    }

    Printf(“Even elements of the array: “);
    For (int I = 0; I < even_count; i++) {
        Printf(“%d “, even[i]);
    }
    Printf(“\n”);

    Printf(“Odd elements of the array: “);
    For (int I = 0; I < odd_count; i++) {
        Printf(“%d “, odd[i]);
    }
    Printf(“\n”);

    Return 0;
}


