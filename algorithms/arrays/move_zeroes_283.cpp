// ================================================================
// Topic:      Arrays
// Problem:    Move Zeroes
// LeetCode:   #283
// Date:       June 10, 2026
// ================================================================
//
// WHAT IS THIS:
// Move all zeroes to the end of the array while maintaining
// the relative order of non-zero elements. In-place, no extra array.
//
// WHEN TO USE IT:
// - In-place array rearrangement
// - Maintaining relative order while filtering elements
// - Two pointer slow/fast pattern
//
// EXAMPLE:
// Input:  [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]
//
// EDGE CASES:
// - Empty array:     loop doesn't execute, nothing changes
// - No zeroes:       slow == fast check prevents overwriting
// - All zeroes:      slow never advances, fast zeros everything
// - Single element:  works correctly, one iteration
// ================================================================





#include <iostream>
#include <vector>
using namespace std;

// ─── Solution ───────────────────────────────────────────────────
// Time complexity:  O(n) — single pass through the array
// Space complexity: O(1) — in-place, only two pointer variables
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;

        for (int fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != 0) {
                int temp = nums[slow];
                nums[slow] = nums[fast];
                nums[fast] = temp;
                slow++;
            }
        }
    }

    void moveZerosv2(vector<int>& nums){
        int slow = 0;
        for(int =  )
    }
};

// ─── Helper — prints a vector ───────────────────────────────────
void printVector(vector<int>& v) {
    cout << "[";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

// ─── Main — test cases ──────────────────────────────────────────
int main() {
    Solution sol;

    // test case 1 — normal case
    vector<int> nums1 = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums1);
    cout << "Test 1 output:   "; printVector(nums1);
    cout << "Test 1 expected: [1, 3, 12, 0, 0]" << endl;
    cout << endl;

    // test case 2 — no zeroes
    vector<int> nums2 = {1, 2, 3};
    sol.moveZeroes(nums2);
    cout << "Test 2 output:   "; printVector(nums2);
    cout << "Test 2 expected: [1, 2, 3]" << endl;
    cout << endl;

    // test case 3 — all zeroes
    vector<int> nums3 = {0, 0, 0};
    sol.moveZeroes(nums3);
    cout << "Test 3 output:   "; printVector(nums3);
    cout << "Test 3 expected: [0, 0, 0]" << endl;
    cout << endl;

    // test case 4 — single element
    vector<int> nums4 = {1};
    sol.moveZeroes(nums4);
    cout << "Test 4 output:   "; printVector(nums4);
    cout << "Test 4 expected: [1]" << endl;

    return 0;
}