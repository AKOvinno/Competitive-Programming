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
        int n, s = 1, k = 0, x = 0;
        cin >> n;
        for(int i = 1; ; i++) {
            int mov = 2 * i - 1;
            if(s) {
                x += (-1 * (mov));
                s = 0;
                k = 1;
            }
            else if(k) {
                x += mov;
                k = 0;
                s = 1;
            }
            if(x < -1*n || x > n) {
                break;
            }
            //cout << "x: " << x << "\n";
        }
        if(k) {
            cout << "Sakurako\n";
        }
        else if(s) {
            cout << "Kosuke\n";
        }
    }

    return 0;
}

