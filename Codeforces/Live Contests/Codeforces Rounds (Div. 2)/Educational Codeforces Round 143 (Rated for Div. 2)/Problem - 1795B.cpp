#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, k, count = 0;
        cin >> n >> k;
        int ara[n][2];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 2; j++) {
                cin >> ara[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 2; j++) {
                if(ara[i][j] == k)
                    count++;
            }
        }
        if(count) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
