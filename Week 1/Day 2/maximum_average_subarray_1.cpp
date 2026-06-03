#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int start=0, end=k;
        
        //Store Result of starting window
        double sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        double maxsum=sum;

        //Slide window
        while(end<nums.size()){
            sum-=nums[start];   //Remove last element
            start++;            //Shrink window
            
            sum+=nums[end];     //Add next element
            end++;              //Expand window
            
            maxsum=max(maxsum, sum);
        }
        return maxsum/k;
        
    }
};