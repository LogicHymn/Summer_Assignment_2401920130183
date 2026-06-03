#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int index=0;
        //Squaring
        for(int i=0; i<nums.size(); i++){
            nums[index]=nums[i]*nums[i];
            index++;
        }
        //Sorting
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[j]>nums[i]){
                    swap(nums[j], nums[i]);
                }
            }
        }

        return nums;
    }
};