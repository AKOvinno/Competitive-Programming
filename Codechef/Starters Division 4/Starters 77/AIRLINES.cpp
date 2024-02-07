#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int total_seats = 10*x;
        if(total_seats <= y)
            cout << total_seats*z << "\n";
        else
            cout << y*z << "\n";
    }
    return 0;
}
