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
        int n, k, cnt = 0, ara_len = 0;
        cin >> n >> k;
        if(k == 1) {
            for(int i = 1; i <= n; i++) {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }
        int minn = n/k;
        int excep = 1;
        for(int i = minn+1; i <= n; ) {
            cnt++;
            if(cnt == k) {
                cout << excep++ << " ";
                cnt = 0;
            }
            else {
                cout << i << " ";
                i++;
            }
            ara_len++;
        }
        if(ara_len < n) {
            cout << excep;
        }
        cout << "\n";
    }

    return 0;
}

