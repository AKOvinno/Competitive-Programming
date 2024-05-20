#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, found = 0, i, j = 0;
        cin >> n;
        char a[n];
        for(i = 0; i < n; i++) {
            cin >> a[i];
        }
        string main = "FBFFBFFBFB";
        for(i = 0; i < 10; i++) {
            if(main[i] == a[j]) {
                j++;
                if(j == n) {
                    found = 1;
                    break;
                }
            }
            else if(j > 0 && main[i] != a[j]) {
                j = 0;
            }
        }
        if(found) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
