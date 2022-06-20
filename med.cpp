#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int med = arr[1];
    sort(arr, arr + 3);
    if(med == arr[1]){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}