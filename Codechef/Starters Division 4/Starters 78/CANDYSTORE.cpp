#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x, y, ans, extra;
        cin >> x >> y;
        if(y < x) {
            ans = y * 1;
            cout << ans << "\n";
        }
        else {
            ans = x * 1;
            extra = (y-x) * 2;
            cout << ans + extra << "\n";
        }
    }
    return 0;
}
