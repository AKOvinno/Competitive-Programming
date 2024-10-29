#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    long long int t;
    cin >> t;
    while(t--) {
        long long int n, k, operations = 0;
        cin >> n >> k;
        if(n < k || k == 1) {
            cout << n << "\n";
        }
        else if(n == k) {
            cout << 1 << "\n";
        }
        else {
            while(n) {
                operations += n % k;
                n /= k;
            }
            cout << operations << "\n";
        }
    }
    return 0;
}

