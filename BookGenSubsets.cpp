#include <bits/stdc++.h>
using namespace std;

vector<int> subset = {1, 2, 3, 4};
int n = 4;

void search(int k)
{
    if (k == n)
    {
        cout << k << '\t';
    }
    else
    {
        search(k + 1);
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
    }
}

int main(){
    search(0);
    return 0;
}

