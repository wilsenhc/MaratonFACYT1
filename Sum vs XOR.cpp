#include <bits/stdc++.h>

using namespace std;

int main() {
    long n, m;
    long result = 0;
    long ab = 0;
    cin >> n;
    m = n;
    for (long i = 0; i <= n; i++, m++)
    {
        ab = n^i;
        if (m == ab)
                result++;
    }
    cout << result << endl;
    return 0;
}
