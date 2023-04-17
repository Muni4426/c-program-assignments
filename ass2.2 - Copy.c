#include <stdio.h>

Int main() {
    Int arr[100], n, largest, second_largest;
    Printf(“Enter the number of elements in the array: “);
    Scanf(“%d”, &n);

    Printf(“Enter %d integers: “, n);
    For (int I = 0; I < n; i++) {
        Scanf(“%d”, &arr[i]);
    }

    Largest = arr[0];
    Second_largest = arr[1];

    For (int I = 1; I < n; i++) {
        If (arr[i] > largest) {
            Second_largest = largest;
            Largest = arr[i];
        }
        Else if (arr[i] > second_largest && arr[i] != largest) {
            Second_largest = arr[i];
        }
    }

    Printf(“The largest element is %d\n”, largest);
    Printf(“The second largest element is %d\n”, second_largest);

    Return 0;
}

