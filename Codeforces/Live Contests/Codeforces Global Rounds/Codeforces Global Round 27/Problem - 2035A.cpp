#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        ll n, m, r, c, dis = 0;
        cin >> n >> m >> r >> c;
        if(n == 1 && m == 1) {
            cout << 0 << "\n";
            continue;
        }
        ll rem = (n * m) -  ( (r - 1) * m ) - c;
        dis += rem;
        if(n != r) {
            dis += (n - r) * (m - 1);
        }
        cout << dis << "\n";
    }

    return 0;
}

