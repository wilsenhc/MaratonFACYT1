#include <bits/stdc++.h>

using namespace std;

int main() {
    long n, m;
    long result = 0;
    long ab = 0;
    cin >> n;
    if (n > 100)
    {
        while (n != 0)
        {
            if ((n & 1) == 0)
            {
                result++;
            }
            n = n >> 1;
        }
        cout << pow(2, result) << endl;
    }
    else
    {
        m = n;
        for (long i = 0; i <= n; i++, m++)
        {
            ab = n^i;
            if (m == ab)
                result++;
        }
        cout << result << endl;
    }
    return 0;
}
