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
        int n, cow = 0, hen = 0;
        cin >> n;
        cow = n/4;
        n -= (cow*4);
        hen = n/2;
        cout << cow+hen << "\n";
    }

    return 0;
}

