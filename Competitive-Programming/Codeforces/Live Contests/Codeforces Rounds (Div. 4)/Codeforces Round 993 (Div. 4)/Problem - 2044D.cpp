#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> ara(n);
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            cin >> ara[i];
        }
        ans.push_back(ara[0]);
        for(int i = 1; i < n; i++) {

        }
    }

    return 0;
}

