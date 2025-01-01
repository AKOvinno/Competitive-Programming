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
        int n, k, flag;
        cin >> n >> k;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >>ara[i];
        }
        for(int i = 0; i < n; i++) {
            flag = 1;
            for(int j = 0; j < n; j++) {
                if(i == j) continue;
                int div = abs(ara[i] - ara[j]);
                if(div % k == 0) {
                    flag = 0;
                    break;
                }
            }
            if(flag) {
                cout << "YES\n";
                cout << i+1 << "\n";
                break;
            }
        }
        if(!flag) {
            cout << "NO\n";
        }
    }

    return 0;
}

