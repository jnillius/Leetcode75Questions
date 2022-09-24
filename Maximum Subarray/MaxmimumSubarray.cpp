// Leetcode problem: https://leetcode.com/problems/maximum-subarray/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = 0;
        for (int i = 0; i < nums.size(); i++){
            if (currentSum < 0)
                currentSum = 0;
            currentSum = currentSum + nums[i];
            maxSum = max(maxSum,currentSum);
        }
        return maxSum;  
    }
};

int main(){
    vector<int> nums = {4,5,-1,-1,-1,2,2,-20,9};//;{-3,-2,-1};//{4,-1,1,-1,4};//

    Solution sol;
    int maxSum = sol.maxSubArray(nums);

    cout << "The input array is:" << endl;
    for (int n : nums)
        cout << n << " ";
    cout << endl << "The maximum sum of a sub array is: " << maxSum << endl;
        
    return 0;
}