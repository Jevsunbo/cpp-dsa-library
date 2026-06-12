#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares(nums.size(), 0);
        // square the original array and create a new, squared array
        for(int i =0; i<nums.size(); i++){
            squares[i] = nums[i]*nums[i];}

        // sort the new array
        for(int i = 0; i< squares.size(); i++){
            for(int j = 1; j<squares.size()-1; j++){
                int temp = 0;
                if(squares[i]>squares[j]){
                    temp = squares[j];
                    squares[j] = squares[i];
                    squares[i]=temp;}
            }
        }
        return squares;
    }
};

int main(){
vector<int> nums = {-4,-1,0,3,10};


}
