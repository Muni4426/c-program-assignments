#include <stdio.h>

Int main() {
    Int arr[] = {1, 2, 3, 2, 1};
    Int n = sizeof(arr) / sizeof(arr[0]);
    Int reversed[n];

    // reverse the array and store it in a new array
    For (int I = 0; I < n; i++) {
        Reversed[i] = arr[n – I – 1];
    }

    // check if the reversed array is equal to the original array
    Int is_palindrome = 1;
    For (int I = 0; I < n; i++) {
        If (reversed[i] != arr[i]) {
            Is_palindrome = 0;
            Break;
        }
    }

    If (is_palindrome) {
        Printf(“The array is a palindrome\n”);
    } else {
        Printf(“The array is not a palindrome\n”);
    }

    Return 0;
}

