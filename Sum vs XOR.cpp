#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    long result = 0;
    cin >> n;
    cout.precision(100);
    while (n != 0)
    {
        if ((n & 1) == 0)
        {
            result++;
        }
        n = n >> 1;
    }
    cout << pow(2, result) << endl;
    return 0;
}
