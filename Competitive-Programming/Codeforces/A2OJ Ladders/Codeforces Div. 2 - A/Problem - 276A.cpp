#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n, k, max_joy = -1e9;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int f, t, joy;
        cin >> f >> t;
        if(t > k) {
            joy = f - (t - k);
        }
        else {
            joy = f;
        }
        if(joy > max_joy) {
            max_joy = joy;
        }
    }
    cout << max_joy << "\n";
    return 0;
}

