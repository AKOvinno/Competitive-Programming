#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    b = b / 1e12;
    d = d / 1e12;
    if(pow(a, b) > pow(c, d)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}
