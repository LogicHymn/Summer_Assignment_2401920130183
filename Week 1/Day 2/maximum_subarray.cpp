#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=INT_MIN;
        int prefix=0;

        for(int i=0; i<nums.size(); i++){
            prefix+=nums[i];
            maximum=max(maximum, prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return maximum;
        
    }
};