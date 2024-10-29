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
        int a, flag = 1;
        cin >> a;
        vector <int> v;
        while(a) {
            int num = a % 10;
            v.push_back(num);
            a /= 10;
        }
        reverse(v.begin(), v.end());
        if(v[0] != 1 || v[1] != 0 || v[2] == 0) {
            flag = 0;
        }
        int size_a = v.size();
        int mul = 1;
        int exp = 0;
        for(int i = size_a-1; i >= 2; i--) {
            exp += (v[i] * mul);
            mul *= 10;
        }
        if(exp < 2) flag = 0;
        if(flag) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}

