#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> romanNum;
    romanNum = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    //int sum = 0;
    int tempSum = 0;
    for(int i = 0; i < s.length(); i++){
        if(i+1 < s.length()){
            if(romanNum[s[i]] < romanNum[s[i+1]]){
                tempSum = tempSum - romanNum[s[i]] ;
            }
            else{
                tempSum = romanNum[s[i]] + tempSum;
            }
        }
        else{
            tempSum = romanNum[s[i]] + tempSum;
        }
    }
    
    cout << "The Answer is " << tempSum << "\n";
    return 0;
}