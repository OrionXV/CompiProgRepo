#include <iostream>
#include <bits/stdc++.h>
#include <stdint.h>
#define N 200001

using namespace std;

int32_t a[N];
int main()
{
    uint_fast8_t t;
    cin >> t;
    for(uint_fast8_t i=0; i<t; ++i)
    {
        uint_fast64_t k;
        uint_fast32_t n=0;
        cin >> n >> k;
        
        for (uint_fast32_t j = 0; j < n; ++j)
        {
            cin >> a[j];
        }
        for(uint_fast64_t j=0; j<k;++j)
        {
            int32_t d=*max_element(a, a + n);
            for (uint_fast32_t l=0;l<n;++l)
            { 
                a[l]=d-a[l];
            }
        }
        for (uint_fast32_t j = 0; j < n; ++j)
        {
            cout << a[j] << " ";
        }       
    }
    return 0;
}