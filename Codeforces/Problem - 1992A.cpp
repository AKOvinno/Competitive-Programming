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
        vector <int> a;
        for(int i = 0; i < 3; i++) {
            int num;
            cin >> num;
            a.push_back(num);
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < 5; i++) {
            a[0]++;
            sort(a.begin(), a.end());
        }
        int mul = 1;
        for(int i = 0; i < 3; i++) {
            mul *= a[i];
        }
        cout << mul << "\n";
    }

    return 0;
}

