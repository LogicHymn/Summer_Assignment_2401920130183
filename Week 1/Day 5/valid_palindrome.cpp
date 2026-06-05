#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for(char c : s){
            if(isalnum(c)){
                clean += tolower(c);
            }
        }

        int start = 0, end = clean.size()-1;

        while(start < end){
            if(clean[start] != clean[end]){
                return false;
            }
            start++, end--;
        }

        return true;
        }
};