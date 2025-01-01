#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int store1, store2;
        cin >> store1 >> store2;
        int first = 100 - store1;
        int second = 200 - 2 * store2;
        if(first < second) {
            cout << "FIRST\n";
        }
        else if(first > second) {
            cout << "SECOND\n";
        }
        else {
            cout << "BOTH\n";
        }
    }
    return 0;
}
