#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<int> array_a;
  vector<int> array_b;
  int temp;
  for(int i = 0; i < n; i++){
    cin >> temp;
    array_a.push_back(temp);
  }
  for(int i = 0; i < m; i++){
    cin >> temp;
    array_b.push_back(temp);
  } 
  int i = 0;
  int j = n-1;
  int sum = 0;
  int max_ele = 0;

  while(!array_b.empty()){
    max_ele = *max_element(array_b.begin(), array_b.end());
    array_b.erase(max_element(array_b.begin(), array_b.end()));

    if(array_a[i] >= array_a[j]){
      sum = sum + max_ele*array_a[i];
      i++;
    }
    else{
      sum = sum + max_ele*array_a[j];
      j--;
    }
  }

  cout << sum;
  return 0;
}