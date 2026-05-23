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

        int count = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
            if (x == 0) count++;
            else {
                ans = max(ans, count);
                count = 0;
            }
        }

        cout << max(ans, count) << endl;

    }
    
    return 0;
}
