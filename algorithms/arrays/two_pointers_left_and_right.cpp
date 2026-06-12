#include <iostream>
#include <vector>
using namespace std;

// write the two pointer left/right function for finding two numbers that sum to a target in a sorted array.
vector<int> sorted_sum(vector<int>& array, int target){
  vector<int> indeces;
  int left = 0, right = array.size()-1;

  while(left<right){
    int sum = array[left]+array[right];
    if(sum == target){
      return {left, right};}
    else if(sum < target){
      left++;}
    else{
      right--;}
  }
  return {-1,-1};
}

int main(){
vector<int> nums = {2, 4 , 5, 1, 8};
vector<int> sorted = sorted_sum(nums, 11);
cout << "these are the indices of the array that equal 13: {" << sorted[0] << ", " << sorted[1] << "}" << endl;
}