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
        int k, n, m, maxx = 0;
        cin >> k;
        int ara[k];
        for(int i = 0; i < k; i++) {
            cin >> ara[i];
            if(ara[i] > maxx) {
                maxx = ara[i];
            }
        }
        int fre[maxx+1];
        for(int i = 0; i < maxx+1; i++) {
            fre[i] = 0;
        }
        for(int i = 0; i < k; i++) {
            fre[ara[i]] = 1;
        }
        int len = k - 2;
        for(int i = 1; i <= len; i++) {
            if(len % i == 0 && len/i <= maxx) {
                if(fre[i] == 1 && fre[len/i] == 1) {
                    n = i;
                    m = len/i;
                    break;
                }
            }
        }
        cout << n << " " << m << "\n";
    }

    return 0;
}

