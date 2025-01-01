#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    ll t;
    cin >> t;
    while(t--) {
        ll l, r, k, op = 1;
        cin >> l >> r >> k;
        if(l * k > r) {
            cout << 0 << "\n";
            continue;
        }
        ll ans = (r - (l * k) )/ k;
        cout << op + ans << "\n";
    }

    return 0;
}

