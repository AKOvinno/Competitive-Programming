#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int n, sum = 0, one = 0, two = 0, three = 0, four = 0, taxi = 0, total_extra = 0, extra;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
        sum += ara[i];
        if(ara[i] == 1) one++;
        else if(ara[i] == 2) two++;
        else if(ara[i] == 3) three++;
        else if(ara[i] == 4) four++;
    }
    if(one > 0) {
        extra = one % 4;
        taxi += ((one - extra) / 4);
        total_extra += extra;
    }

    if(two > 0) {
        extra = (two*2) % 4;
        total_extra += extra;
        taxi += ((two*2) - extra) / 4;
        cout << "taxi 2: " << ((two*2) - extra) / 4 << "\n";
    }

    if(three > 0) {
        extra = (three * 3) % 4;
        total_extra += extra;
        taxi += ((three * 3) - extra) / 4;
        cout << "taxi 3:" << ((three * 3) - extra) / 4 << "\n";
    }
    if(four > 0) {
        taxi += four;
    }
    cout << total_extra<< "\n";
    if(total_extra > 0 && total_extra % 4 == 0) {
        taxi += (total_extra / 4);
    }
    else if(total_extra > 0 && total_extra % 4 != 0) {
        taxi += (total_extra / 4) + 1;
    }
    cout << taxi << "\n";
    return 0;
}
