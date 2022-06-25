#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        vector<string> vec;
        for(int i = 0; (i < numRows) && (i < n); i++){
            string stemp(1, s[i]);
            vec.push_back(stemp);
        }
        
        int j = vec.size();
        bool flag = false;
        s = s.substr(j);
        int i = 0;
        for(auto x : s){
            string stemp(1, x);
            vec[j].append(stemp);

            if(i%vec.size() == 0){
                flag = !flag;
            }

            if(flag){
                j--;
            }
            else{
                j++;
            }
            i++;
        }
        
        string result = "";
        for(auto x : vec){
            //result = result + x;
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