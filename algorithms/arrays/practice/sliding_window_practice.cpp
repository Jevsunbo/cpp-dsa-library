#include <iostream>
#include <vector>
using namespace std;


// Input: array + window size k
// Output: maximum sum of any subarray of size k
int sliding_window(vector<int>& nums, int window){
  int max = nums[0], sum = 0;

  // lets find the sum of every sub array and track the maximum sum 
  for(int i=0; i<window; i++){
  // add up every element of the first subarray
    sum = sum + nums[i];}

  max = sum; //update max after building the first window

  for(int i=window; i<nums.size(); i++){
  // calculate the new sum by subtracting the element leaving and adding the element coming in.
    sum = sum - nums[i-window] + nums[i];
    if(sum > max){
      max = sum;
    }
  }
  return max;
}

int main() {
    // test 1 — normal case
    vector<int> nums1 = {2, 1, 5, 1, 3, 2};
    cout << sliding_window(nums1, 3) << endl;  // expected: 9

    // test 2 — all negatives
    vector<int> nums2 = {-2, -1, -5, -1};
    cout << sliding_window(nums2, 2) << endl;  // expected: -2

    // test 3 — window = array size
    vector<int> nums3 = {1, 2, 3};
    cout << sliding_window(nums3, 3) << endl;  // expected: 6
}