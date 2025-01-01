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
        int n, zero = 0, one = 0, flag = 0, eleven = 0;
        cin >> n;
        string str;
        cin >> str;
        for(int i = 0; i < n; i++) {
            if(str[i] == '1' && str[i+1] == '1' && str[i+2] == '1') {
                flag = 1;
            }
            if(str[i] == '1' && str[i+1] == '1') {
                eleven++;
            }
            if(str[i] == '1') one++;
            else zero++;
        }
        if(zero == 0) flag = 1;
        if(str[0] == '1' && str[n-1] == '1') {
            flag = 1;
        }
        if(eleven >= 1 && (str[0] == '1' || str[n-1] == '1')) {
            flag = 1;
        }
        if(eleven >= 2) {
            flag = 1;
        }

        if(flag) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}

