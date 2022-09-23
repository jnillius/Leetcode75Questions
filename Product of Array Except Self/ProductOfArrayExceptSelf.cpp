// Leetcode problem: https://leetcode.com/problems/product-of-array-except-self/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        int prod = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            
            ans[i] = prod;
            prod = prod*nums[i];
        }
        prod = 1;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            ans[i] = ans[i]*prod;
            prod = prod*nums[i];
        } 
        return ans;
    }
};

int main(){
    vector<int> nums = {1,2,3,4,1,2,3};

    Solution sol;
    vector<int> arr = sol.productExceptSelf(nums);

    cout << "The input array is:" << endl;
    for (int n : nums)
        cout << n << " ";
    cout << endl << "The new array is:" << endl;
    for (int n : arr)
        cout << n << " ";
        
    return 0;
}