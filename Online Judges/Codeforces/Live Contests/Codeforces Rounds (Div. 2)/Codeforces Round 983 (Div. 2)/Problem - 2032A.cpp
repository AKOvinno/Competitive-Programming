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
        int n, sum = 0, minimum, maximum;
        cin >> n;
        int ara[2*n];
        for(int i = 0; i < 2*n; i++) {
            cin >> ara[i];
            sum += ara[i];
        }
        if(sum == 0) {
            minimum = 0;
            maximum = 0;
        }
        else if(sum == 2*n) {
            minimum = 0;
            maximum = 0;
        }
        else if(sum == n) {
            maximum = n;
            if(sum % 2 == 1) {
                minimum = 1;
            }
            else {
                minimum = 0;
            }
        }
        else if(sum > n && sum < 2*n) {
            maximum = 2*n - sum;
            if(sum % 2 == 1) {
                minimum = 1;
            }
            else {
                minimum = 0;
            }
        }
        else if(sum > 0 && sum < n) {
            maximum = sum;
            if(sum % 2 == 1) {
                minimum = 1;
            }
            else {
                minimum = 0;
            }
        }
        cout << minimum << " " << maximum << "\n";
    }

    return 0;
}

