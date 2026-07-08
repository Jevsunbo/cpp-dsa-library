// Day 16 — HashMap internals demo
// Topic: hash function, collision chaining, frequency map pattern
// Time: O(1) average insert/lookup, O(n) worst case
// Space: O(n)
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// PART 1: Use std::unordered_map, understand what it's doing
void frequency_map_demo(){
  string text = "hello world";
  unordered_map<char,int> freq;
  for(char c: text){
    freq[c]++;
  }
  for(auto& [key, val]: freq){
    cout << key << ": " << val << endl;
  }
}

// PART 2: The complement lookup pattern — Two Sum's core trick
// Instead of nested loop O(n²), store "what we've seen" in a map
// Then for each number, ask "does its complement already exist?"
void complement_lookup_demo() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int, int> seen;

    for(int i=0; i<nums.size();i++){
      int complement = target - nums[i];
      if(seen.count(complement)){
        cout << "Found: [" << seen[complement] << ", " << i << "]" << endl;
        return;
      }
      seen[nums[i]] = i;
    }   
}

int main() {
    frequency_map_demo();
    complement_lookup_demo();
    return 0;
}