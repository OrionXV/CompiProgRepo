#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> arr, int n, int k)
{
    // k must be smaller than n
    if (n < k)
    {
       cout << "Invalid";
       return -1;
    }
 
    // Compute sum of first window of size k
    int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i];
 
    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int curr_sum = res;
    for (int i=k; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       res = max(res, curr_sum);
    }
 
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t; 
    for(int t1 =0; t1 < t; t1++){
        int n, moves; 
        cin >> n >> moves;
        vector<int> vec;
        int totSum = 0;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            vec.push_back(input);
            totSum += input;
        }
        int maxIndex = max_element(vec.begin(), vec.end()) - vec.begin();

        int cyc = moves/n;
        int remCyc = moves%n;
        int result = 0;
        if(moves > n){
            result = totSum + moves - n; 
        }
        else{
            result = maxSum(vec, n, moves);
        }
        cout << result << '\n';
    }
    return 0;
}
