// Leetcode problem: https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i<nums.size()-1;i++)
        {
            for(int j = i+1; j<nums.size();j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    return vector<int> {i,j};
                }
            }    
        }
        return vector<int> {};
    }
};

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> idx;
        for(int i = 0; i < nums.size(); i++)
        {
            if (m.find(target-nums[i]) != m.end())
            {
                idx.push_back(m.find(target-nums[i])->second);
                idx.push_back(i);
                return idx;
            }
            m[nums[i]] = i;
        }
        return idx; 
    }
};

class Solution3 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            if (m.find(target-nums[i]) != m.end())
            {
                return vector<int> {m.find(target-nums[i])->second,i};
            }
            m[nums[i]] = i;  
        }
        return vector<int> {};
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 9;

    Solution2 sol;
    vector<int> idx = sol.twoSum(nums,target);

    if(idx.size()==0){
        cout << "It's impossible to add two different numbers of the vector input to equal the target." << endl;
    }
    else{
        cout << "Given the following numbers:" << endl;
        for (int x : nums)
            cout << x << " ";
        printf("\nWe can sum two numbers to %i by adding item of index: %i and %i.", target, idx[0], idx[1]);
    }
    return 0;
}