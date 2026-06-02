#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //Sort
        sort(nums.begin(), nums.end());

        //Check
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
        
    }
};