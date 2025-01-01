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
        int n, i, j, found = 0;
        cin >> n;
        char ara[n];
        for(i = 0; i < n; i++) {
            cin >> ara[i];
        }
        for(i = 0; i < n; i++) {
            if(ara[i] >= 'A' && ara[i] <= 'Z') {
                ara[i] = ara[i] + 32;
            }
        }
        char ara2[] = "meow";
        if(ara[0] != ara2[0]) {
            cout << "NO\n";
            continue;
        }
        for(i = 1, j = 0; i < n; i++) {
            if(ara[i] == ara2[j]) continue;
            if(ara[i] != ara2[j] && ara[i] == ara2[j+1]) {
                j++;
                continue;
            }
            if(ara[i] != ara2[j]) {
                found = 1;
                break;
            }

        }
        if(!found && j == 3) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
