#include <stdio.h>

Int main() {
    Int arr[] = {1, 2, 4, 5, 4, 2, 7, 5};
    Int n = sizeof(arr) / sizeof(arr[0]);
    For (int I = 0; I < n; i++) {
        For (int j = I + 1; j < n;) {
            If (arr[j] == arr[i]) {
                For (int k = j; k < n; k++) {
                    Arr[k] = arr[k+1];
                }
            } else {
                J++;
            }
        }
    }

    Printf(“Resultant Array after removing duplicates: “);
    For (int I = 0; I < n; i++) {
        Printf(“%d “, arr[i]);
    }

    Return 0;
}


