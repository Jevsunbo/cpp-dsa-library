#include <iostream>
using namespace std;

// Time Complexity: O(n) - Single pass through array
// Space Complexity: O(n) - Hashmap stores up to n elements
vector<int> two_sum(vector<int>& nums, int target){
  vector<int> indices;
  unordered_map<int, int> map;
  for(int i=0; i<nums.size(); i++){
    int complement = target - nums[i];
    if(map.count(complement)){
      return {map[complement], i};
    }
    map[nums[i]] = i;
  }
  return {}; // no solution found
}

int main(){}