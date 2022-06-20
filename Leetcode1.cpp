#include <bits/stdc++.h>
 
using namespace std;

int main() {
  


  return 0;
}

bool digitCount(string num) {
    multiset<int> s;
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i = 0; i < num.length(); i ++){
        s.insert((int)num[i] - '0');
    }
    for(int i = 0; i < num.length(); i ++){
        if((int)num[i] - '0' != s.count(i)){
            return false;
        }
    }
    return true;
}