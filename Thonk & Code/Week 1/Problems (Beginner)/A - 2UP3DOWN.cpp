#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int x, y;
    cin >> x >> y;
    if(y > x) {
        int diff = y - x;
        if(diff > 2) {
            cout << "No\n";
        }
        else {
            cout << "Yes\n";
        }
    }
    else {
        int diff = x - y;
        if(diff > 3) {
            cout << "No\n";
        }
        else {
            cout << "Yes\n";
        }
    }
    return 0;
}
