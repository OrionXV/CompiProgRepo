#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int l = 0;
        int h = s.length() - 1;
    
        // Keep comparing characters while they are same
        while (h > l)
        {
            if (s[l++] != s[h--])
            {
                
                return false;
            }
        }
       return true;
    }
};