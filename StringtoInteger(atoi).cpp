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
    int myAtoi(string s) {
        
        bool isNeg = false;
        int i = 0;
        while(s[i] == ' '){
            i++;
        }
        s = s.substr(i);
        
        if(s[0] == '-'){
            isNeg = true;
            s = s.substr(1);
        }
        else if(s[0] == '+'){
            s = s.substr(1);
        }
        int n = s.length();
        int digit;
        int sum = 0;
        i = 0;
        while(i < n && s[i]>='0' && s[i]<='9'){   
            digit = s[i] - '0';
            if(checkMulti(sum) && checkAdd(sum*10, digit)){
                sum = sum*10 + digit; 
                i++;
            }
            else if(isNeg){
                return INT_MIN;
            }
            else{
                return INT_MAX;
            }
        }

        if(isNeg){
            sum = -sum;
        }

        return sum;
    }
};

int main(){
    Solution obj;
    string test;
    cout << "Enter\n";
    cin >> test;
    cout << '\n' << obj.myAtoi(test) << '\n';

}