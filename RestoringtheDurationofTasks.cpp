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
            c.push_back(input - a[i]);
        }
       
        for(int i = 0; i < n - 1; i++){
            if(b[i] > a[i + 1]){
                c[i + 1] = b[i + 1] - b[i];
            }
        }

        for(int i = 0; i < n; i++){
            cout << c[i] << ' ';
        }

        cout << '\n';       
    }
  return 0;
}
