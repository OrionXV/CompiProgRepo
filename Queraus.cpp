#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t; 
    multiset<int> s;

    for(long long i = 0; i < t; i++){
        int key = 0;
        cin >> key;
        int x, c;
        switch(key){
            case 1:
                cin >> x;
                s.insert(x);
                break;

            case 2:
                cin >> x >> c;
                c = std::min((int)s.count(x), c);
                for(int j = 0; j < c; j++){
                    s.erase(s.find(x));
                }
                break;

            case 3:
                int max_element = *(s.rbegin());
                int min_element = *s.begin();
                cout << max_element - min_element << '\n';
                break;
        }
    }
    return 0;
}