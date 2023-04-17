#include <stdio.h>

Int main() {
    Int array[] = {10, 15, 90, 200, 110};
    Int n = sizeof(array) / sizeof(array[0]);
    Int max_diff = 0;
    Int min_elem = array[0];

    For (int I = 1; I < n; i++) {
        Int diff = array[i] – min_elem;
        If (diff > max_diff) {
            Max_diff = diff;
        }
        If (array[i] < min_elem) {
            Min_elem = array[i];
        }
    }

    Printf(“Maximum difference is %d\n”, max_diff);

    Return 0;
}
