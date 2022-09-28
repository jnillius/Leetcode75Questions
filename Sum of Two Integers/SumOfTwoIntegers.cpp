#include <bitset>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    int SumTwoInts(int a, int b){
        while(b != 0)
        {
            int temp = (uint32_t)(a & b) << 1;
            a = a ^ b;
            b = temp;
        }
        return a;
    }
};

int main(){
    int a = -31;
    int b = 30;
    Solution sol;
    int sum = sol.SumTwoInts(a,b);
    cout <<  a << " + " << b << " = " << sum << endl;
    
}