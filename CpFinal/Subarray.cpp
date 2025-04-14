
#include <iostream>
#include <vector>
using namespace std;

// Function to find subarray with given sum using two pointers method
pair<int, int> findSubarrayWithSum(int arr[], int n, int x) {
    int left = 0, right = 0, current_sum = 0;

    // Iterate through the array
    while (right < n) {
        // Add elements to current_sum until it is greater than or equal to x
        while (current_sum < x && right < n) {
            current_sum += arr[right];
            right++;
        }

        // If current_sum becomes equal to x, return indices
        if (current_sum == x) {
            for (int i = left; i < right; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            return {left, right - 1};
        }

        // Move the left pointer to reduce the current_sum
        while (current_sum > x && left < right) {
            current_sum -= arr[left];
            left++;
        }

        // If current_sum becomes equal to x after moving left pointer, return indices
        if (current_sum == x) {
            for (int i = left; i < right; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            return {left, right - 1};
        }
    }

    // If no subarray with sum x is found, return {-1, -1}
    return {-1, -1};
}

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> x;

    // Call the function to find subarray with given sum
    pair<int, int> result = findSubarrayWithSum(arr, n, x);

    if (result.first != -1)
        cout << "Returned indices: " << result.first << " to " << result.second << endl;
    else
        cout << "Returned: No valid subarray." << endl;

    return 0;
}

//5
//1 2 3 4 5
//15

