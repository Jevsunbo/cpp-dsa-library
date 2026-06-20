#include <iostream>
using namespace std;

// The prompt:
// Given an array of strings, group all anagrams together and return them as a list of groups. The order of the groups and the order within each group doesn't matter.
// Input:  ["eat","tea","tan","ate","nat","bat"]
// Output: [["eat","tea","ate"],["tan","nat"],["bat"]]

// look at the elements of the array, sort the word to extract the anagram key. 
// store accoringly, once weve gone through the array, return the value of each of the keys
vector<vector<string>> anagrams(vector<string>& str){
  unordered_map<string, vector<string>> map;
  string key = "";
  for(int i=0; i<str.size(); i++){
    key = str[i];
    sort(key.begin(), key.end());
    map[key].push_back(str[i]);
  }

  vector<vector<string>> result;
  for(auto& key : map){
    result.push_back(key.second);
  }
  return result;
}

int main(){}