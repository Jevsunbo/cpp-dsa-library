// Topic:      Arrays
// Problem:    Prefix Sum
// Date:       May 31, 2026
//
// WHAT IS THIS:
// A prefix sum array stores the cumulative sum of all elements
// up to each index. Lets you answer range sum queries in O(1)
// instead of looping each time.
//
// WHEN TO USE IT:
// - Range sum queries (sum of elements between index i and j)
// - Problems asking about running totals or cumulative counts
//
// EXAMPLE:
// Input:  [2, 4, 1, 3, 5]
// Output: [2, 6, 7, 10, 15]
//
// ================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// ─── Solution ───────────────────────────────────────────────────
// Time complexity:  O(n) — one pass to build the prefix array
// Space complexity: O(n) — extra array of same size as input

vector<int> prefixSum(vector<int>& nums) {
  vector<int> prefix(nums.size(), 0);
    prefix[0] = nums[0];
    for(int i = 0; i<nums.size(); i++){
      prefix[i] = prefix[i-1] + nums[i];
    };

  return prefix;
}


// ─── Main — test your solution ──────────────────────────────────
int main() {
    // test case 1 — normal case
    vector<int> nums1 = {2, 4, 1, 3, 5};

    // test case 2 — edge case (single element)
    vector<int> nums2 = {7};

    // test case 3 — negatives
    vector<int> nums3 = {-1, 2, -3, 4};

    return 0;
}