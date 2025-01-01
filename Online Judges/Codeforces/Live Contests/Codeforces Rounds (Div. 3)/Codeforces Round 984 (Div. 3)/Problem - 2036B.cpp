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
        int n, k, total = 0;
        cin >> n >> k;
        vector <int> c(k, 0);
        for(int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            c[x-1] += y;
        }
        sort(c.begin(), c.end(), greater<int>());
        if(n > c.size()) {
            for(int i = 0; i < c.size(); i++) {
                total += c[i];
            }
        }
        else {
            for(int i = 0; i < n; i++) {
                total += c[i];
            }
        }
        cout << total << "\n";
    }

    return 0;
}

