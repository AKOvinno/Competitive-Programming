#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int turn = 1;
    int sereja = 0, dima = 0;
    while(!v.empty()) {
        if(turn) {
            if(v.back() > *v.begin()) {
                sereja += v.back();
                v.pop_back();
            }
            else {
                sereja += *v.begin();
                v.erase(v.begin());
            }
            turn = 0;
        }
        else {
            if(v.back() > *v.begin()) {
                dima += v.back();
                v.pop_back();
            }
            else {
                dima += *v.begin();
                v.erase(v.begin());
            }
            turn = 1;
        }
    }
    cout << sereja << " " << dima << "\n";
    return 0;
}

