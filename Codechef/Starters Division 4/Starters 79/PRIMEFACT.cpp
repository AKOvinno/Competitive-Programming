#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x, y, Count = 0;
        cin >> x >> y;
        while(x < y) {
            if(x % 2 == 0) {
                x += 2;
            }
            else if(x % 3 == 0) {
                x += 3;
            }
            else if(x % 5 == 0) {
                x += 5;
            }
            else if(x % 7 == 0) {
                x += 7;
            }
            Count++;
        }
        cout << Count << "\n";
    }
    return 0;
}
