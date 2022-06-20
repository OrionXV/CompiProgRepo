#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n, k; 
    cin >> n >> k;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int avg = 0;

    for(int i = 0; i < k*n; ++i)
    {
        avg = round((sum/n) + i/n);
        if (avg == k)
        {
            cout << i;
            break;
        }
    }
}
