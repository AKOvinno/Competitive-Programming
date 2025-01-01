#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n, c, maxx = 0;
    cin >> n >> c;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    for(int i = 1; i < n; i++) {
        int num = ara[i-1] - ara[i] - c;
        if(num > maxx) {
            maxx = num;
        }
    }
    cout << maxx << "\n";
    return 0;
}

