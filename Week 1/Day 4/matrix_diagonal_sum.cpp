#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();

        for(int i=0; i<n; i++){
            //Primary
            sum+=mat[i][i];
            //Secondary
            sum+=mat[i][n-1-i];
        }
        //Forgot the repetition (taken help)
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }
        return sum;
        
    }
};