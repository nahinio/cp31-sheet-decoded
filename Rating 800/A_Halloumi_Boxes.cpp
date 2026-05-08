#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            v.push_back(temp);
        }

        vector<int> sortedV = v;
        sort(sortedV.begin(), sortedV.end());

        if(sortedV == v || k > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

    return 0;
}