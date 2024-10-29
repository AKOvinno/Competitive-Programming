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
    if(four > 0) {
        taxi += four;
    }
    //cout << taxi << "\n";
    if(three > 0) {
        taxi += three;
        if(one >= three) {
            one -= three;
        }
        else {
            one = 0;
        }
    }
    //cout << taxi << "\n";
    if(two > 0) {
        if(two % 2 == 0) {
            taxi += (two/2);
            two = 0;
        }
        else {
            taxi += (two/2);
            two = 1;
        }
        if(two > 0) {
            one -= 2;
            taxi += two;
        }
    }
    //cout << taxi << "\n";
    if(one > 0) {
        if(one % 4 == 0) {
            taxi += (one / 4);
            one = 0;
        }
        else {
            taxi += (one / 4);
            taxi += 1;
        }
    }
    cout << taxi << "\n";
    return 0;
}
