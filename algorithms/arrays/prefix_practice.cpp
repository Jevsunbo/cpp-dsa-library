#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_sum(vector<int>& nums){
  vector<int> prefix(nums.size(), 0);
  prefix[0] = nums[0];
  for(int i=1; i<nums.size(); i++){
    prefix[i] = prefix[i-1] + nums[i];}
  return prefix;}

void print_prefix(vector<int>& prefix){
  cout << "Here is the prefix array: {";
  for(int i=0; i<prefix.size(); i++){
  cout << prefix[i];
  if(i < prefix.size()-1){
    cout << ", ";}
  cout << "}" << endl;
}


int main(){
  vector<int> nums = {2, 4, 1, 3, 5};
  vector<int> prefix = prefix_sum(nums);
  print_prefix(prefix);
}