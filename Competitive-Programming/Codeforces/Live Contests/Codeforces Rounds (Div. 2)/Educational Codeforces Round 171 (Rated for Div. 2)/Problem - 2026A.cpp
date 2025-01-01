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
    while (t--) {
		int X, Y, K;
		cin >> X >> Y >> K;
		int M = min(X, Y);
		cout << "0 0 " << M << " " << M << endl;
		cout << "0 " << M << " " << M << " 0" << endl;
	}

    return 0;
}

