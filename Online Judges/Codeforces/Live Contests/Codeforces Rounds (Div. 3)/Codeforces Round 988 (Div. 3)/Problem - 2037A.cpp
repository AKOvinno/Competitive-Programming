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
        int n, maxx = 0, op = 0;
        cin >> n;
        int ara[n];
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
            if(ara[i] > maxx) {
                maxx = ara[i];
            }
        }
        int fre[maxx+1];
        for(int i = 0; i < maxx+1; i++) {
            fre[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            fre[ara[i]]++;
        }
        for(int i = 0; i < maxx+1; i++) {
            op += (fre[i] / 2);
        }
        cout << op << "\n";
    }

    return 0;
}

