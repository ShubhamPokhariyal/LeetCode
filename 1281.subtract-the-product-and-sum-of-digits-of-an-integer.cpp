/*
 * @lc app=leetcode id=1281 lang=cpp
 *
 * [1281] Subtract the Product and Sum of Digits of an Integer
 */

// @lc code=start
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1;
        int digit;
        while(n>0){
            digit=n%10;
            sum += digit;
            prod *= digit;
            n/=10;
        }
        return prod-sum;
    }
};
// @lc code=end

