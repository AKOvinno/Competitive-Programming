#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    //optimize();

    int t;
    cin >> t;
    while(t--) {
        ll n, b, c, element, cnt = 0;
        cin >> n >> b >> c;
        if(n == b && b == c) {
            cnt = n;
        }
        else if(n > 2 && b == 0 && c == 0) {
            cnt = -1;
        }
        else {
            for(ll i = 0; i < n; i++) {
                element = b * i + c;
                if(element >= n) cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}

