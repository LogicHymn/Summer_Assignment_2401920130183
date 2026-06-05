#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        string ans = "";

        for(int i = 0; i < min(first.size(), last.size()); i++) {
            if(first[i] != last[i]) {
                break;
            }
            ans += first[i];
        }

        return ans;
    }
};