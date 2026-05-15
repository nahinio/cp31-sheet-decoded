#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int totalTwo = 0;
        int leftTwo = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == 2) totalTwo++;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == 2) leftTwo++;

            if (leftTwo == totalTwo - leftTwo) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}