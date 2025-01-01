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
        int n, s, t;
        cin >> n >> s >> t;
        if(n == s && s == t) {
            cout << 1 << "\n";
            continue;
        }
        if(s <= t) {
            cout << (n-s)+1 << "\n";
        }
        else {
            cout << (n-t)+1 << "\n";
        }
    }

    return 0;
}

