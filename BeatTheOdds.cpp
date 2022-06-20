#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t; 
    for(int t1 =0; t1 < t; t1++){
        vector<int> vec;
        int input; 
        int n;
        cin >> n;
        int even = 0; int odd = 0;
        for(int i = 0; i < n ; i ++){
            cin >> input;
            if(input%2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }

        cout << min(even, odd) << '\n';
    }

    return 0;
}