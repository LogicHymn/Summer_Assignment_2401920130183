#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        double maximumAvg=sum/k;

        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];

            double avg=sum/k;
            if(avg>maximumAvg){
                maximumAvg=avg;
            }
        }

        return maximumAvg;
        
    }
};