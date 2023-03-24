#include<iostream>
using namespace std;

int main()
{
    int n, i, last;
    cin >> n;
    if(n % 2 != 0) {
        cout << "-1\n";
        return 0;
    }
    if(n % 2 == 0) {
        for(i = 2; i <= n; i+=2) {
            cout << i << " ";
            cout << i-1 << " ";
        }
    }
    return 0;
}
