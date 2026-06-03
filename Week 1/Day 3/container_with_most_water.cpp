#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int length, breadth, area;
        int maxArea=0;
        int n = height.size();
        int start=0, end=n-1;

        while(start<=end){
            length = min(height[start], height[end]);
            breadth = end-start;
            area=length*breadth;
            maxArea=max(maxArea, area);

            if(height[start] < height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxArea;
    }
};