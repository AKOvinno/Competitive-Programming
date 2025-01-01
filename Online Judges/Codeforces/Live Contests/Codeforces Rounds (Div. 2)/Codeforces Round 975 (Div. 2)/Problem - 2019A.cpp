#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, odd, even;
        cin >> n;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        if(n % 2 == 0) {
            even = n/2;
            odd = n/2;
        }
        else {
            even = n/2;
            odd = (n/2) + 1;
        }
        int max_odd = 0, max_even = 0;
        for(int i = 0; i < n; i+=2) {
            if(ara[i] > max_odd) {
                max_odd = ara[i];
            }
        }
        for(int i = 1; i < n; i+=2) {
            if(ara[i] > max_even) {
                max_even = ara[i];
            }
        }
        int ans1 = max_odd+odd, ans2 = max_even+even;
        if(ans1 > ans2) {
            cout << ans1 << "\n";
        }
        else {
            cout << ans2 << "\n";
        }
    }
    return 0;
}
