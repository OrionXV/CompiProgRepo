#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
   int t;
    cin >> t; 
    for(int t1 =0; t1 < t; t1++){
        int n, k;
        cin >> n >> k;
        string s; 
        cin >> s;
        vector<int> vec;
        if('B' == s.at(0)){
                vec.push_back(1);
            }
        else{
                vec.push_back(-1);
        }

        for(int i = 1; i < n; i++){
            if('B' == s.at(i)){
                if(vec.back() > 0){
                    vec.back() += 1;
                }
                else{
                    vec.push_back(1);
                }

            }
            else{
                if(vec.back() < 0){
                    vec.back() -= 1;
                }
                else{
                    vec.push_back(-1);
                }
            }
        }
        
    return 0;
}
