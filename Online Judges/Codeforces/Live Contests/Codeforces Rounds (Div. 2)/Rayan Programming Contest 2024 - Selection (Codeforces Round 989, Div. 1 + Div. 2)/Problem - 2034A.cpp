#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        for(int i = min(a, b); ; i++) {
            if(i % a == i % b) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}
