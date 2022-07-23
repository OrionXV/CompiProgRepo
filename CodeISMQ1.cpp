#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  int sum = 0;
  int temp;
  int max_sum = 0;
  for(int i = 0; i < n; i++){
    cin >> temp;
    sum+= temp;
    max_sum = max(sum, max_sum);
  }
  cout << max_sum;
  return 0;
}