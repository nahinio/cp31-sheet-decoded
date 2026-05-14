#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, sumODD = 0;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1) sumODD += a[i];
        }

        if (sumODD % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    
    
    return 0;
}