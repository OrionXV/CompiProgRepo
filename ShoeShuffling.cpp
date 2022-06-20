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
        vector<int> vec;
        vector<int> result;
        map<int, int> reg;
        int input;

        for(int i = 0; i < n; i++){
            cin >> input;
            vec.push_back(input);
            reg[input]++;
            result.push_back(i+ 1);
        }

        int flag = 0;
        for(int i = 0; i < n; i++){
            if(reg[vec[i]] < 2){
                cout << -1 << '\n';
                flag = 1; 
                break;
            }
            else{
                if(i < n){
                    for(int j = i + 1; j < n; j++){
                        if(vec[j] == vec[i]){
                            swap(result[i], result[j]);
                            swap(vec[i], vec[j]);
                            break;
 
                        }
                    }
                }
            }
        }
        /*
        for(auto x : reg){
            if(x.second < 2){
                cout << -1 << '\n';
                flag = 1; 
                break;
            }
            else{
                std::vector<int>::iterator it = vec.begin();
                std::vector<int>::iterator it2 = vec.begin();
                while(it2 != vec.end()){
                    it = std::find (it, vec.end(), x.second);
                    it2 = std::find (it, vec.end(), x.second);
                    swap(vec[it - vec.begin()], vec[it2 - vec.begin()]);
                    swap(result[it - vec.begin()], result[it2 - vec.begin()]);   
                }
            }
        }
        */
        if(flag == 0){
            for(auto x : result){
                cout << x << ' ';
            }
            cout << '\n';
        }


    }

    return 0;
}