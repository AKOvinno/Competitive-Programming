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
        int n, flag = 0;
        cin >> n;
        string str;
        cin >> str;
        if(str[0] == '2' && str[1] == '0' && str[2] == '2' && str[3] == '0') {
            flag = 1;
        }
        else if(str[0] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0') {
            flag = 1;
        }
        else if(str[0] == '2' && str[1] == '0' && str[n-2] == '2' && str[n-1] == '0') {
            flag = 1;
        }
        else if(str[0] == '2' && str[1] == '0' && str[2] == '2' && str[n-1] == '0') {
            flag = 1;
        }
        else if(str[n-4] == '2' && str[n-3] == '0' && str[n-2] == '2' && str[n-1] == '0') {
            flag = 1;
        }
        if(flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
