#include <iostream>
#include <limits>

using namespace std;
class Solution {
public: 
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int o = x;
        int r = 0;

        while(x > 0) {
            int d = x % 10;
            if(r > (INT_MAX - d) / 10) {
                return false;
            }
            r = r * 10 + d;
            x /= 10;
        }

        return o == r;
    }
};