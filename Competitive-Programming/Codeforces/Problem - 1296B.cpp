#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        int s, extra;
        cin >> s;
        int burls = s;
        while(burls > 9) {
            s += (burls / 10);
            burls = (burls / 10) + (burls % 10);
            //cout << burls << "\n";
        }
        cout << s << "\n";
    }

    return 0;
}

