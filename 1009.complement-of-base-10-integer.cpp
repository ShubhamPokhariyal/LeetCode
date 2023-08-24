/*
 * @lc app=leetcode id=1009 lang=cpp
 *
 * [1009] Complement of Base 10 Integer
 */

// @lc code=start
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }

        int mask=0;
        int temp=n;

        while(n!=0){
            mask = mask<<1;
            mask = mask | 1;
            n = n >> 1;
        }
        int ans = ~temp & mask;
        return ans;   
    }
};
// @lc code=end

