#include <stdio.h>
#include <limits.h>

Int minJumps(arr[], int n) {
    // if the array has only one element or the first element is 0, we can’t reach the end
    If (n <= 1 || arr[0] == 0) {
        Return -1;
    }
    
    // initialize variables for current max reach, current steps, and jumps
    Int maxReach = arr[0], steps = arr[0], jumps = 1;
    
    // loop through the array
    For (int I = 1; I < n; i++) {
        // if we have reached the end of the array, return the number of jumps
        If (I == n – 1) {
            Return jumps;
        }
        
        // update the max reach
        maxReach = (maxReach > I + arr[i]) ? maxReach : I + arr[i];
        
        // decrement the steps required to reach this index
        Steps--;
        
        // if the steps required to reach this index is 0, take a jump
        If (steps == 0) {
            Jumps++;
            
            // if the current index is greater than the current max reach, we can’t reach the end
            If (I >= maxReach) {
                Return -1;
            }
            
            // update the steps required to reach the next index
            Steps = maxReach – I;
        }
    }
    
    Return -1;
}

Int main() {
    Int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    Int n = sizeof(arr) / sizeof(arr[0]);
    Int jumps = minJumps(arr, n);
    
    If (jumps == -1) {
        Printf(“The end is not reachable.\n”);
    } else {
        Printf(“The minimum number of jumps to reach the end is %d.\n”, jumps);
    }
    
    Return 0;
}
