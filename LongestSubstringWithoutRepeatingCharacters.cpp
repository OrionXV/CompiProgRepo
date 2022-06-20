#include <bits/stdc++.h>
 
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n=s.length();
    int ans=0;
    int l=0;
    unordered_set<char> st;
    for(int i=0;i<n;i++){
        while(st.find(s[i])!=st.end()){
            st.erase(s[l]);
            l++;
        }
        st.insert(s[i]);
        ans = max(ans,i-l+1);
    }
    return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s; 
  cin >> s; 
  cout << lengthOfLongestSubstring(s) << '\n';
  return 0;
}