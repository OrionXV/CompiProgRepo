#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
   int t;
    cin >> t; 
    for(int t1 =0; t1 < t; t1++){
        int input;
        cin >> input;
        if(input%2 == 0){
            if(__builtin_popcountll(input) == 1){
                cout << input + 1 << '\n';
            }
            else{
                int p = log2(input&-input);
                cout << (1<<p) << '\n';
            }
        }
        else if(input == 1){
            cout << 3 << '\n';
        }
        else{
            cout << 1 << '\n';
        }
    }
  return 0;
}
