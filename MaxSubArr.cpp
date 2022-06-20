//int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2 };
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2 };
    int n = sizeof(arr)/sizeof(int);
    int best = 0; int sum = 0;
    for(int i; i<n; i++){
        sum = max(arr[i], arr[i]+sum);
        best = max(best, sum);
    }
    cout << "Best array:\t" << best;
    return 0;
}