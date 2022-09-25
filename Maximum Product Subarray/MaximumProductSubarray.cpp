// Leetcode problem: https://leetcode.com/problems/maximum-product-subarray/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int curProd = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            maxProd = max(maxProd, curProd*nums[i]);
            curProd = nums[i]==0 ? 1: curProd*nums[i];
        }
        curProd = 1;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            maxProd = max(maxProd, curProd*nums[i]);
            curProd = nums[i]==0 ? 1: curProd*nums[i];
        }
        return maxProd;
    }
};

int main(){
    vector<int> nums = {2,3,-2,4};

    Solution sol;
    int prod = sol.maxProduct(nums);

    cout << "The input array is:" << endl;
    for (int n : nums)
        cout << n << " ";
    cout << endl << "The maximum product of a subarray is " << prod << endl;
        
    return 0;
}