#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int third = min(b, c);
        b -= third;
        c -= third;
        if(b > c) {
            int second = min(b, a);
            b -= second;
            a-= second;
        }
        else {
            int second = min(c, a);
            c -= second;
            a-= second;
        }
        if(a > 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
