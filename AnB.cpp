#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string num;
        cin >> num;
        vector<int> numbers;
        for(int j = 0; j < num.length(); j++){
            numbers.push_back((int)num[j] - 48);
        }
        if(numbers.size() == 2){
            cout << numbers.back() << '\n';
        }
        else{
            cout << *min_element(numbers.begin(), numbers.end()) << '\n';
        }
    }
    return 0;
}

