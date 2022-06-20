#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    int number;
    number = ceil(n/a)*ceil(m/a);
    cout << number;
    return 0;
}