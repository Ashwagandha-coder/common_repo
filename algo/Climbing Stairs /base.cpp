
#include "base.h"
#include "iostream"

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }

        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};


int main() {
    Solution solution;

    cout << solution.climbStairs(5);
}