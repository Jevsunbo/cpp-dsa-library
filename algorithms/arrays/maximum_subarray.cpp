// Maximum Subarray
// Given an integer array, find the subarray with the largest sum
// and return its sum.
//
// Example: [-2, 1, -3, 4, -1, 2, 1, -5, 4] → 6  (subarray: [4,-1,2,1])

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// ─── Brute Force ────────────────────────────────────────────────
// Time complexity:  O(n²) — two nested loops
// Space complexity: O(1)  — no extra arrays, just tracking sums

int maxSubarrayBrute(vector<int>& nums) {
    int largest = nums[0];

    for (int i = 0; i < nums.size(); i++) {
        int sum = nums[i];
        if (largest < sum) largest = sum;

        for (int j = i + 1; j < nums.size(); j++) {
            sum += nums[j];
            if (sum > largest) largest = sum;
        }
    }

    return largest;
}


// ─── Kadane's Algorithm ─────────────────────────────────────────
// Key idea: at each element, decide whether to extend the current
// subarray or restart a new one from here.
//
// Time complexity:  O(n)  — single pass, each element visited once
// Space complexity: O(1)  — only two variables, no extra arrays

int maxSubarrayKadane(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(currentSum, maxSum);
    }

    return maxSum;
}


// ─── Main ────────────────────────────────────────────────────────
int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Brute force: " << maxSubarrayBrute(nums) << endl;
    cout << "Kadane's:    " << maxSubarrayKadane(nums) << endl;

    return 0;
}
