#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int a, b, a_win = 0, draw = 0, b_win = 0;
    cin >> a >> b;
    for(int x = 1; x <= 6; x++) {
        if(abs(a-x) < abs(b-x)) {
            a_win++;
        }
        else if(abs(b-x) < abs(a-x)) {
            b_win++;
        }
        else if(abs(a-x) == abs(b-x)) {
            draw++;
        }
    }
    cout << a_win << " " << draw << " " << b_win << "\n";
    return 0;
}

