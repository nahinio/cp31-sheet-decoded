#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }


        int maxim = 0;

        if(a.size() == 1) maxim = a[0];
        else {
            for(int i = 1; i < n; i++) {
                if((a[i] - a[i - 1]) > maxim) maxim  = a[i] - a[i - 1];
            }
        }

        int newMin = 2 * (x - a[n - 1]) ;
        int extraMin = a[0];

        cout << max(max(maxim, newMin), extraMin) << endl;
    }
    
    return 0;
}