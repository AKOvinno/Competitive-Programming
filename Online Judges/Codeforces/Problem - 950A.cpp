#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int l, r, a;
    cin >> l >> r >> a;
    if(l == r) {
        l += (a/2);
        r += (a/2);
    }
    else if(l < r) {
        if(abs(l-r) >= a) {
            l += a;
            r = l;
        }
        else {
            a -= (abs(l-r));
            l = r;
            l += (a/2);
            r += (a/2);
        }
    }
    else if(l > r) {
        if(abs(l-r) >= a) {
            r += a;
            l = r;
        }
        else {
            a -= (abs(l-r));
            r = l;
            l += (a/2);
            r += (a/2);
        }
    }
    cout << l+r << "\n";
    return 0;
}

