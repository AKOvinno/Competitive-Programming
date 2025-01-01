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
        int n, k, op = 0;
        cin >> n >> k;
        if(n == 1) {
            cout << 0 << "\n";
            continue;
        }
        if(n <= k) {
            cout << 1 << "\n";
            continue;
        }
        if(n % k == 0 && n / k == k) {
            op = (n/k) + 1;
            cout << op << "\n";
            continue;
        }
        while(n > 1) {
            n -= (k-1);
            op++;
        }
        cout << op << "\n";
    }

    return 0;
}

