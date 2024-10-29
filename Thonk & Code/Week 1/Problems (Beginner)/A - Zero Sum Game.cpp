#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, sum = 0;
    cin >> n;
    int ara[n-1];
    for(int i = 0; i < n-1; i++) {
        cin >> ara[i];
        sum += ara[i];
    }
    if(sum < 0) {
        cout << sum*(-1) << "\n";
    }
    else {
        cout << sum*(-1) << "\n";
    }
    return 0;
}
