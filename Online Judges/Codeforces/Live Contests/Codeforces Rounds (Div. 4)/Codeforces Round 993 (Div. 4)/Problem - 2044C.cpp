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
        int m, a, b, c, cnt = 0;
        cin >> m >> a >> b >> c;
        int first = m, second = m;
        if(a <= m) {
            cnt += a;
            first -= a;
        }
        else {
            cnt += m;
            first = 0;
        }
        if(b <= m) {
            cnt += b;
            second -= b;
        }
        else {
            cnt += m;
            second = 0;
        }
        if(c <= (first+second)) {
            cnt += c;
        }
        else {
            cnt += (first+second);
        }
        cout << cnt << "\n";
    }

    return 0;
}

