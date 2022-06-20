#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t; 
    for(int t1 =0; t1 < t; t1++){
        vector<int> vec;
        int n, input;
        cin >> n;
        for(int i =0; i < n ; i++){
            cin >> input;
            vec.push_back(input);
        }
        vector<int> evenNum;
        vector<int> oddNum;
        int minEl = 1000000000;
        for(auto x : vec){
            if(x&1){
                oddNum.push_back(x);
            }
            else{
                evenNum.push_back(x);
                minEl = min((int)log2(x & -x) + 1, minEl);
            }
        }

        if(evenNum.empty()){
            cout << 0 << '\n';
        }
        else if(oddNum.empty()){
            int result = minEl + evenNum.size() - 2;
            cout << result << '\n';
        }
        else{
            cout << evenNum.size() <<'\n';
        }
    }
    return 0;
}
