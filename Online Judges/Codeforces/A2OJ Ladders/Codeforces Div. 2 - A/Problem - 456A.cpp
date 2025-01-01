#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n, flag = 0;
    cin >> n;
    ll sze = 1e6;
    ll ara[sze];
    for(int i = 0; i < sze; i++) {
        ara[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(ara[a] == 0) {
            ara[a] = b;
        }
        else {
            flag = 1;
        }
    }
    if(flag) {
        cout << "Happy Alex\n";
    }
    else {
        cout << "Poor Alex\n";
    }
    return 0;
}

