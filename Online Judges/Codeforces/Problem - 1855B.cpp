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
        ll n;
        cin >> n;
        ll cnt = 0;
        for(ll i = 1; ; i++) {
            if(n%i != 0) {
                break;
            }
            else {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}
