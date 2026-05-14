#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans;

        if (n < 10) ans = n;

        else if (n < 100) ans = 9 + n / 10;

        else if (n < 1000) ans = 18 + n / 100;

        else if (n < 10000) ans = 27 + n / 1000;

        else if (n < 100000) ans = 36 + n / 10000;

        else if (n < 1000000) ans = 45 + n / 100000;

        cout << ans << "\n";
    }

    return 0;
}