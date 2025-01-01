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
        int n;
        cin >> n;
        vector <int> ara(n);
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        sort(ara.begin(), ara.end());
        while(ara.size() != 1) {
            int num = (ara[0] + ara[1]) / 2;
            ara[1] = num;
            ara.erase(ara.begin());
        }
        for(auto i : ara) cout << i << " ";
        cout << "\n";
    }
    return 0;
}

