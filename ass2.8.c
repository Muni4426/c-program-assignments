#include <stdio.h>

Int main() {
    Int arr[] = {1, 2, 3, 2, 1, 1, 4};
    Int n = sizeof(arr) / sizeof(arr[0]);
    Int freq[n];
    Int visited[n];

    // initialize freq and visited arrays
    For (int I = 0; I < n; i++) {
        Freq[i] = 1;
        Visited[i] = 0;
    }

    // count the frequency of each element
    For (int I = 0; I < n; i++) {
        If (visited[i] == 1) {
            Continue;
        }
        For (int j = I + 1; j < n; j++) {
            If (arr[i] == arr[j]) {
                Freq[i]++;
                Visited[j] = 1;
            }
        }
    }

    // print the frequency of each element
    Printf(“Element   Frequency\n”);
    For (int I = 0; I < n; i++) {
        If (visited[i] == 0) {
            Printf(“%d         %d\n”, arr[i], freq[i]);
        }
    }

    Return 0;
}

