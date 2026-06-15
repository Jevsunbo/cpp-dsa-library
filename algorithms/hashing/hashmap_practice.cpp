#include <iostream>
using namespace std;

// Key = the number from the array
// Value = how many times it appears
// Use unordered_map<int, int>
// Loop through the array
// If element exists → increment
// If it doesn't → insert it with value 1

// 1. Return type:  unordered_map<int, int>
// unordered_map<int, int> freq(vector<int>& nums){
//   unordered_map<int, int> map;
//   for(int i=0; i<nums.size(); i++){
//     map[nums[i]]++;
//   }
//   return map;
// }

// Time complexity: O(n) - looping through the array once.
// Space complexity: O(n) - storing the same number of elements as in the map.
unordered_map<int, int> freq(vector<int>& nums){
  unordered_map<int, int> map;
  for(int i=0; i<nums.size(); i++){
    map[nums[i]]++;
  }
  return map;
}
// 2. Function name: freq
// 3. Parameter:    vector<int>& nums
// 4. Inside body:
//    - Create empty unordered_map<int, int>
//    - Loop through nums
//    - For each element, increment its count in the map
//    - Return the map



// Open your editor and write the full function. Include a main() that tests it with [1, 2, 2, 3, 1, 1] and prints the result.
int main(){
  vector<int> nums = {1,2,2,3,1,1};
  unordered_map<int, int> seen = freq(nums);
  for(const pair<int, int>& entry : seen){
    cout << entry.first << ":" << entry.second << endl;
  }
}