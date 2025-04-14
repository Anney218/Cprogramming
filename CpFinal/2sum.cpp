
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<int, int> twoSum(vector<int>& arr, int target) {
    vector<pair<int, int>> nums;

    for (int i = 0; i < arr.size(); i++) {
        nums.push_back({arr[i], i});
    }

    sort(nums.begin(), nums.end());

    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = nums[left].first + nums[right].first;
        if (sum == target) {
            return {nums[left].second, nums[right].second};
        } else if (sum < target)
            left++;
        else
            right--;
    }

    return {-1, -1}; // No valid pair found
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    pair<int, int> result = twoSum(arr, target);

    if (result.first == -1)
        cout << "No such values exist." << endl;
    else
        cout << "Indices: " << result.first << " and " << result.second << endl;

    return 0;
}
//4
// 1 3 5 7
// 8
