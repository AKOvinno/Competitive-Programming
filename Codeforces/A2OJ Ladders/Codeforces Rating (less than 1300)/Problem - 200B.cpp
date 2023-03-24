#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ara[n];
    double ans = 0.0;
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    for(int i = 0; i < n; i++) {
        ans += (1.0/n*1.0) / (100.0 / ara[i]*1.0);
    }
    ans = ans * 100;
    cout << fixed << setprecision(12) << ans << "\n";
    return 0;
}
