/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        //power of 2s are 1,2,4,8,16
        if(!(n&(n-1))){
            return true;
        }
        return false;
    }
};
// @lc code=end

