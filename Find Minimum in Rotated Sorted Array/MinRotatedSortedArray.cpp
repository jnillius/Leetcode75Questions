// Leetcode problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = (nums.size())/2;

        while (left != right)
        {
            
            if (nums[left] > nums[right])
            {
                if (nums[(left+right)/2] < nums[right])
                {
                    right = (left+right)/2;
                }   
                else
                {
                    left = (left+right+1)/2;
                }
            }
            else
            {
                if (left == 0 && nums[0] > nums[nums.size()-1])
                {
                    left = nums.size()/2;
                    right = nums.size()-1;
                }
                else
                {
                    right = left;
                }
            }
        }
        return nums[right];
        
    }
};

int main(){
    vector<int> nums = {2,1};

    Solution sol;
    int mini = sol.findMin(nums);

    cout << "The input array is:" << endl;
    for (int n : nums)
        cout << n << " ";
    cout << endl << "The minimum element in the array is " << mini << endl;
        
    return 0;
}