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
        int n, width = 0, height = 0;
        cin >> n;
        int w[n], h[n];
        for(int i = 0; i < n; i++) {
            cin >> w[i] >> h[i];
            if(w[i] > width) {
                width = w[i];
            }
            if(h[i] > height) {
                height = h[i];
            }
        }
        cout << 2 * (width + height) << "\n";
    }

    return 0;
}

