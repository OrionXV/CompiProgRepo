#include <bits/stdc++.h>
using namespace std;

int sqfinder(int r){
    for(int i = r; r>=1; r--){
        double h = sqrt(i);
        if (pow(h, 2) == (float)i){
            return (int)h;
        }
    }
    return 0;
}

int cufinder(int r){
    for(int i = r; r>=1; r--){
        double h = cbrt(i);
        if (pow(h, 3) == (float)i){
            return (int)h;
        }
    }
    return 0;
}

int bothfinder(int r){
    for(int i = r; r>=1; r--){
        double h = pow(i, 1/6);
        if (pow(h, 6) == (double)i){
            return (int)h;
        }
    }
    return 0;
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
        cout << count;
    }
}