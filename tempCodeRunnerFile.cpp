#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t; 
    set<int> s;
    for(int i = 0; i < t; i++){
        int key = 0;
        cin >> key;
        if(key == 1){
            int x;
            cin >> x;
            s.insert(x);
        }

        if(key == 2){
            int x, c;
            cin >> x >> c;
            c = std::min((int)s.count(x), c);
            for(int j=0; j< c; j++){
                s.erase(s.find(x));
            }
        }

        if(key == 3){
            int max_element = *(s.rbegin());
            int min_element = *s.begin();
            int diff = max_element - min_element;
            cout << diff;
        }

    }

    return 0;
}