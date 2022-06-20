#include <bits/stdc++.h>
using namespace std;

int sqfinder(int r){
    return (int)sqrt(r);
}

int cufinder(int r){
    return (int)cbrt(r);
}

int bothfinder(int r){
    return (int)pow(r, 1/6);
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int r;
        cin >> r;
        int sq = sqfinder(r);
        int cu = cufinder(r);
        int bo = bothfinder(r);
        int count = sq + cu - bo;
        cout << count << "\n";
    }
}