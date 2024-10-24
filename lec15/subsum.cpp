#include <iostream>

using namespace std;

void findSubarrayWithSum(int arr[], int n, int S) {
    // Your code here
    int subsum = arr[0];
    int start = 0;

    for (int i = 1; i <= n; i++) {
        while (subsum > S && start < i-1) {
            subsum -= arr[start];
            start++;
        }

        if (subsum == S){
            cout << "sub arr is found betwee " << start << " and " << i-1 << endl;
            return;
        }

        if (i < n) {
            subsum += arr[i];
        }
    }

    // If no subarray is found
    cout << "No subarray with the given sum found." << endl;
}

int main() {
    int arr[] = {23, 17, 11, 2, 29, 40, 41, 39, 26, 10, 42, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = -1;
    cout << "Enter the target sum: ";
    cin >> target;
    findSubarrayWithSum(arr, n, target);

    return 0;
}
