#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n, v;
    cin >> n >> v;
    vector <int> sell(n, 0);
    for(int i = 0; i < n; i++) {
        int seller;
        cin >> seller;
        while(seller--) {
            int num;
            cin >> num;
            if(num < v) {
                sell[i] = 1;
            }

        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(sell[i] == 1) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    for(int i = 0; i < n; i++) {
        if(sell[i] == 1) {
            cout << i+1 << " ";
        }
    }
    return 0;
}

