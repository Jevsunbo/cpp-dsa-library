// ─── Approach 1: HashMap ────────────────────────────────────────
// ================================================================
// Topic:      Hashing
// Problem:    Majority Element
// LeetCode:   #169
// Approach:   HashMap frequency count
// Date:       June 16, 2026
// ================================================================
//
// WHAT IS THIS:
// Find the element that appears more than n/2 times in the array.
//
// APPROACH:
// Use a HashMap to count frequency of each element.
// Return the element whose count exceeds n/2.
//
// EXAMPLE:
// Input:  [2, 2, 1, 1, 1, 2, 2]
// Output: 2
//
// EDGE CASES:
// - Single element: only one element, return it
// - All same elements: return that element
//
// Time complexity:  O(n) — single pass through array
// Space complexity: O(n) — HashMap stores up to n unique elements
// ================================================================

#include <iostream>
using namespace std;


int majority_element(vector<int>& nums){
  unordered_map<int, int> map;

  for(int i = 0; i<nums.size(); i++){
    map[nums[i]]++;
    if(map[nums[i]] > nums.size()/2){
      return nums[i];
    }
    else{return 0;}
  }
}

// ─── Approach 2: Boyer-Moore ────────────────────────────────────
// ================================================================
// Topic:      Hashing / Arrays
// Problem:    Majority Element
// LeetCode:   #169
// Approach:   Boyer-Moore Voting Algorithm
// Date:       June 16, 2026
// ================================================================
//
// WHAT IS THIS:
// Find the element that appears more than n/2 times in the array.
//
// APPROACH:
// Use a candidate and count variable. When count hits 0 the current
// element becomes the new candidate. The majority element always
// survives because it has more allies than enemies.
//
// EXAMPLE:
// Input:  [2, 2, 1, 1, 1, 2, 2]
//
// i=0 val=2 count=0 → candidate=2 count=1
// i=1 val=2 matches → count=2
// i=2 val=1 no match → count=1
// i=3 val=1 no match → count=0
// i=4 val=1 count=0 → candidate=1 count=1
// i=5 val=2 no match → count=0
// i=6 val=2 count=0 → candidate=2 count=1
//
// Output: 2 ✓
//
// EDGE CASES:
// - Single element: count starts at 0, element becomes candidate
// - All same elements: count keeps incrementing, returns that element
//
// Time complexity:  O(n) — single pass through array
// Space complexity: O(1) — only two variables regardless of input
//
// WHY THIS IS BETTER:
// Same time complexity as HashMap but O(1) space instead of O(n).
// Always mention this tradeoff in interviews.
// ================================================================
int voting_algorithm(vector<int>& nums){
  int count = 0, candidate = nums[0];
  for(int i=0; i<nums.size(); i++){
    if(count == 0){
      candidate = nums[i];
      count++;
    }
    else if(nums[i] == candidate){
      count++;
    }
    else{
      count--;
    }
  }
}


int main(){}