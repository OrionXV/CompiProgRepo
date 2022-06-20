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
        vector<int> a, b, c;
        int input;
        for(int i = 0; i < n; i++){
            cin >> input;
            a.push_back(input);
        }
        for(int i = 0; i < n; i++){
            cin >> input;
            b.push_back(input);
            c.push_back(a[i] - input);
        }
        int ele = *max_element(c.begin(), c.end());
        int flag = 1;
        for(int i = 0; i < n; i++){
            if(c[i] < 0){
                flag = 0;
                break;
            }
            if(c[i] != ele){
                if(b[i] != 0){
                    flag = 0;
                }
            }
        }

        if(flag == 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n"; 
        }

        
    }
  return 0;
}
