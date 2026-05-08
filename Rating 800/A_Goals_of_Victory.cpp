#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v;

        for (int i = 1; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        int sum = accumulate(v.begin(), v.end(), 0);

        cout << sum * -1 << endl;
        
    }

    return 0;
}
