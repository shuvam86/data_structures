// Link: https://leetcode.com/problems/largest-odd-number-in-string/description/

class Solution {
public:
    string largestOddNumber(string nums) {
        int t = -1;

        for(int i=nums.length()-1;i>=0;i--) {
            if((nums[i] - '0') % 2 != 0) {
                t = i;
                break;
            }
        }
        string res = "";
        if(t == -1) {
            return res;
        }
        for(int i=0;i<=t;i++) {
            res += nums[i];
        }
        return res;
        
    }
};