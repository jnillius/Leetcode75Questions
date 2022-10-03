// Leetcode problem: https://leetcode.com/problems/climbing-stairs/
#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
    int one = 1;
    int two = 1;
    for (int i = 0; i < n-1; i++)
    {
        int temp = one;
        one = one + two;
        two = temp;
    }
    return one;
    }
    
};

int main(){
    int n = 6;
    Solution sol;
    int result = sol.climbStairs(n);
    cout << "Number of possible ways to climb up a stair of length " << n << " using one or two steps is: " << result << endl;
    return 0;
}