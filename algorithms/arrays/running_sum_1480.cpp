// ================================================================
// Topic:      Arrays
// Problem:    Prefix Sum
// Date:       Today's date
// ================================================================
//
// WHAT IS THIS:
// Builds a running total array so range sum queries
// can be answered in O(1) instead of O(n).
//
// WHEN TO USE IT:
// - "Sum of elements between index i and j"
// - "Running totals"
// - "Left sum equals right sum" (Find Pivot Index)
//
// EXAMPLE:
// Input:  [2, 4, 1, 3, 5]
// Output: [2, 6, 7, 10, 15]
// ================================================================

#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(n) - one pass to build the array
// Space Complexity: O(n) - the array is as big as the input
vector<int> buildPrefix(vector<int>& nums){
  vector<int> prefix(nums.size(), 0);
  prefix[0] = nums[0];
  for(int i=1; i<nums.size(); i++){
    prefix[i] = prefix[i-1] + nums[i];
  }
  return prefix;
}

// Time Complexity: O(1) - simple lookup, no looping
// Space Complexity: O(1) - no extra space needed
int rangeQuery(vector<int>& prefix, int to, int from){
  if(from == 0){
    return prefix[from];
  }
  return prefix[to] - prefix[from - 1];
}


// Print Function
void printVector(vector<int>& v) {
  cout << "[";
  for(int i = 0; i<v.size(); i++){
    cout << v[i];
    if(i < v.size()-1){ cout << ", ";}
  };
  cout << "]";
};

int main(){
  // Test Case 1 - Normal Array
  vector<int> nums1 = {2, 1, 4, 3, 5};
  vector<int> prefix1 = buildPrefix(nums1);
  cout << "Input: ";
  printVector(nums1);
  cout << endl;
  cout << "Prefix: ";
  printVector(prefix1);
  cout << endl;
  cout << "Sum 1->3: " << rangeQuery(prefix1, 1, 3) << endl;
  cout << "Expected: 8" << endl;
  cout << endl;

  // Test Case 2 - single element
  vector<int> nums2 = {7};
  vector<int> prefix2 = buildPrefix(nums2);
  cout << "Input: ";
  printVector(nums2);
  cout << endl;
  cout << "Prefix: ";
  printVector(prefix2);
  cout << endl << endl;

  // Test Case 3 - negatives
  vector<int> nums3 = {-1, 2, -3, 4};
  vector<int> prefix3 = buildPrefix(nums3);
  cout << "Input: ";
  printVector(nums3);
  cout << endl;
  cout << "Prefix: ";
  printVector(prefix3);
  cout << endl;
  cout << "Sum 0->2: " << rangeQuery(prefix3, 0, 2) << endl;
  cout << "Expected: -2" << endl;
  cout << endl << endl;

  return 0;
};