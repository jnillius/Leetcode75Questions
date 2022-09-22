// Leetcode problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        int right = 1;

        while (right < prices.size())
        {
            if (prices[right]<prices[left])
            {
                left = right;
            }
            else
            {
                profit = max(profit, prices[right]-prices[left]);
            }
            right++;
        }        
        return profit;
    }
};

int main(){
    vector<int> nums = {7,1,4,3,5};//{5,4,3,2,1};//{1,2,3,4,5};// 

    Solution sol;
    int profit = sol.maxProfit(nums);

    cout << "The maximum profit is: " << profit << endl;

    return 0;
}