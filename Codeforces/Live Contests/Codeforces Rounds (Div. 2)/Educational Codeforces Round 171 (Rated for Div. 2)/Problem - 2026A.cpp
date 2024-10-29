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
        int x, y, k;
        cin >> x >> y >> k;
        int ax = 0, ay = 0, bx = 0, by = 0, cx = 0, cy = 0, dx = 0, dy = 0;
        if(k >= 0 && k <= x && k >= 0 && k <= y) {
            bx = k;
            dy = k;
        }
        else if(k > x) {
            bx = x;
            by = x;
            cx = 0;
            cy = x;
            dx = x;
            dy = 0;
        }
        else if(k > y) {
            bx = y;
            by = y;
            cx = 0;
            cy = y;
            dx = y;
            dy = 0;
        }
        cout << ax << " " << ay << " " << bx << " " << by << "\n";
        cout << cx << " " << cy << " " << dx << " " << dy << "\n";
    }

    return 0;
}

