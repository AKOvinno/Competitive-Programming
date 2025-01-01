#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        int ans = __gcd(ara[0], ara[1]);
        for(int i = 2; i < n; i++) {
            ans = __gcd(ans, ara[i]);
        }
        if(ans < n) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
