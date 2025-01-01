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
        int n, a, b, x = 0, y = 0, flag = 0, cnt = 0;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        for(int i = 0; cnt <= n*20; i++) {
            cnt++;
            if(i == n) i = 0;
            if(str[i] == 'N') y += 1;
            else if(str[i] == 'E') x += 1;
            else if(str[i] == 'S') y -= 1;
            else if(str[i] == 'W') x -= 1;
            if(x == a && y == b) {
                flag = 1;
                break;
            }
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

