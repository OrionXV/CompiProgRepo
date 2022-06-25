#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool checkMulti(int a){
        if(a > 0 && a > INT_MAX/10){
            return false;
        }
        else if(a < 0 && a < INT_MIN/10){
            return false;
        }
        else{
            return true;
        }
    }
    
    bool checkAdd(int a, int b)
    { 
        if (a >= 0 && b >= 0 && (a > INT_MAX - b)) {
            return false;
        }

        else if (a < 0 && b < 0 && (a < INT_MIN - b)) {
            return false;
        }
        else {
        return true;
        }
    }
    
    int reverse(int x) {
        int result = 0;
        int digit;
        
        while(x!=0){
            digit = x%10;
            if(checkMulti(result)){
                result = result*10;
                if(checkAdd(result, digit)){
                    result = result + digit;
                    x = x/10;
                }
                else{
                    return 0;
                }
                
            }
            else{
                return 0;
            }
            
        }
            
        
        
        
        return result;
    }
};