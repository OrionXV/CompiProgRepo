#include <bits/stdc++.h>
 
using namespace std;


 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t; 
    for(int t1 =0; t1 < t; t1++){
        int n;
        cin >> n;
        vector<int> vec;
        vector<int> result;
        map<int, int> reg;
        int input;

        for(int i = 0; i < n; i++){
            cin >> input;
            vec.push_back(input);
            reg[input]++;
            result.push_back(i+ 1);
        }
    }

    return 0;
}