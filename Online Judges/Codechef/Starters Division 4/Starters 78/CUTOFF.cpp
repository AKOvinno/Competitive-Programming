#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector <int> ara(n);
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        sort(ara.begin(), ara.end());
        cout << ara[n-x] - 1 << "\n";
    }
    return 0;
}
