#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        int n = s.length();
        vector<string> vec;
        for(int i = 0; (i < numRows) && (i < n); i++){
            string stemp(1, s[i]);
            vec.push_back(stemp);
        }
        
        int j = vec.size() - 1;
        bool flag = false;
        s = s.substr(j + 1);

        for(int i = 0; i < s.length(); i++){
           
            if(j == vec.size() -1 || j ==0){
                flag = !flag;
            }
            if(flag){
                j--;
            }
            else{
                j++;
            }
            string stemp(1, s[i]);
            vec[j].append(stemp);
        }
        
        string result = "";
        for(auto x : vec){
            result = result + x;
            cout << x << '\n';
        }

        return result;
    }
};

int main(){
    Solution obj;
    cout << "Enter \n";
    string s;
    int r;
    cin >> s;
    cin >> r;
    cout << "Result " << obj.convert(s, r);
    return 0;
}