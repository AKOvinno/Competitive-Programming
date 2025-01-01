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
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        vector <int> block;
        int blk = 0;
        if(a+b >= 0) {
            cout << n * (a+b) << "\n";
        }
        for(int i = 1; i < n; i++) {
            if(str[i] != str[i-1]) {
                blk++;
            }
        }
    }

    return 0;
}

