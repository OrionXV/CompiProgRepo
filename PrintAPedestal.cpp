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
        int a, b, c;
        if(input%3 == 0){
            a = input/3;
            b = input/3 + 1;
            c = input/3 - 1;
        }
        else{
            b = ceil(input/3.) + 1;
            c = floor(input/3.) -1;
            a = input - b - c;
           
        }
        cout << a  << ' ' <<  b  << ' ' << c  << '\n';
    }
  return 0;
}
