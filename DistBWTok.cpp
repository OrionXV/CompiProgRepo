#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cin >> r >> c; 
    string arr[r];
    for(int i = 0; i< r; i++){
        cin >> arr[i];
    }

    int x1, y1, x2, y2;
    for(x1 = 0 ; x1< r; x1++){
        size_t found = arr[x1].find('o');
        if(found != string::npos){
            y1 = found;
            arr[x1][y1] = '-';
            break;
        }
    }

    for(x2 = x1; x2 < r; x2++){
        size_t found = arr[x2].find('o');
        if(found != string::npos){
            y2 = found;
            break;
        }
    }

    int moves = abs(x1-x2) + abs(y1-y2);
    cout << moves; 
    return 0;
}