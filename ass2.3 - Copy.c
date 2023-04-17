#include <stdio.h>

Void sortArrayDescending(int arr[], int n) {
    Int I, j, temp;
    For (I = 0; I < n – 1; i++) {
        For (j = I + 1; j < n; j++) {
            If (arr[i] < arr[j]) {
                Temp = arr[i];
                Arr[i] = arr[j];
                Arr[j] = temp;
            }
        }
    }
}

Int main() {
    Int arr[100], n, I, secondLargest, secondSmallest, sum;
    Float avg;

    Printf(“Enter the number of elements in the array: “);
    Scanf(“%d”, &n);

    Printf(“Enter %d integers: “, n);
    For (I = 0; I < n; i++) {
        Scanf(“%d”, &arr[i]);
    }

    sortArrayDescending(arr, n);

    secondLargest = arr[1];
    secondSmallest = arr[n – 2];
    sum = secondLargest + secondSmallest;
    avg = (float) sum / 2;

    for (I = 0; I < n; i++) {
        if (arr[i] == avg) {
            printf(“The average of second largest and second smallest element, %0.2f, is found in the array.\n”, avg);
            break;
        }
    }

    If (I == n) {
        Printf(“The average of second largest and second smallest element, %0.2f, is not found in the array.\n”, avg);
    }

    Return 0;
}


