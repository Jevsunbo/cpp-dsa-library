// ================================================================
// Topic:      Arrays
// Problem:    Prefix Sum
// Date:       May 31, 2026
// ================================================================
//
// WHAT IS THIS:
// A prefix sum array stores the cumulative sum of all elements
// up to each index. Allows range sum queries to be answered in
// O(1) instead of looping through elements each time.
//
// WHEN TO USE IT:
// - Range sum queries (sum of elements between index i and j)
// - Problems asking about running totals or cumulative counts
// - Anytime you need to repeatedly sum portions of an array
//
// EXAMPLE:
// Input:  [2, 4, 1, 3, 5]
// Output: [2, 6, 7, 10, 15]
//
// Range query example:
// Sum from index 1 to index 3 = prefix[3] - prefix[0] = 10 - 2 = 8
// ================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


// ─── Solution ───────────────────────────────────────────────────
// Time complexity:  O(n) — one pass to build the prefix array
// Space complexity: O(n) — extra array of same size as input

class PrefixSum{
public:
vector<int> prefixSumCalculation(vector<int>& nums) {
    vector<int> prefix(nums.size(), 0);
    prefix[0] = nums[0];
    for(int i = 1; i < nums.size(); i++){
      prefix[i] = prefix[i-1] + nums[i];
    };
    return prefix;
  }

void printVector(vector<int>& vec){
  for(int i = 0; i < vec.size(); i++){
    cout << vec[i] << endl;
  };
}
};

// ─── Main — test your solution ──────────────────────────────────
int main() {
    // test case 1 — normal case
    vector<int> nums1 = {2, 4, 1, 3, 5};
    PrefixSum Calc1;
    Calc1.printVector(Calc1.prefixSumCalculation(nums1));
    // test case 2 — edge case (single element)
    vector<int> nums2 = {7};
    PrefixSum Calc2;
    cout << Calc2.prefixSumCalculation(nums2) << endl;

    // test case 3 — negatives
    vector<int> nums3 = {-1, 2, -3, 4};
    PrefixSum Calc3;
    return 0;
}