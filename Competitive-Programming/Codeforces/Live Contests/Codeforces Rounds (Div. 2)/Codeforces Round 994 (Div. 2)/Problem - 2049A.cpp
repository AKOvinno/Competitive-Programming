#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    //optimize();

    int t;
    cin >> t;
    while(t--) {
        int n, flag = 0, op = 1;
        cin >> n;
        vector <int> ara(n);
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
            if(ara[i] != 0) {
                flag = 1;
            }
        }
        if(!flag) {
            cout << 0 << "\n";
            continue;
        }
        if(n == 2) {
            cout << 1 << "\n";
            continue;
        }
        for(int i = 0; i < n; i++) {
            if(ara[i] == 0 && ara[i-1] != 0 && ara[i+1] != 0) {
                op = 2;
                break;
            }
        }
        cout << op << "\n";
    }

    return 0;
}

