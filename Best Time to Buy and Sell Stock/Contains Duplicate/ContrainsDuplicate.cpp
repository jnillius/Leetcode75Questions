// Leetcode problem: https://leetcode.com/problems/contains-duplicate/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> uniqueNumbers;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if (uniqueNumbers.find(nums[i]) != uniqueNumbers.end())
            {
                return true;
            }
            uniqueNumbers.insert(nums[i]);
        }
        return false;
    }
};

int main(){
    vector<int> nums = {7,1,4,3,5,5};

    Solution sol;
    bool hasDuplicate = sol.containsDuplicate(nums);

    cout << "The array has " << (hasDuplicate ? "atleast one" : "no") << " duplicate elements." << endl;

    return 0;
}