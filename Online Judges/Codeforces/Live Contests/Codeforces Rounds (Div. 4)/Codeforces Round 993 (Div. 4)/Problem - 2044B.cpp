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
        string str;
        cin >> str;
        for(int i = 0; str[i] != '\0'; i++) {
            if(str[i] == 'q') str[i] = 'p';
            else if(str[i] == 'p') str[i] = 'q';
        }
        reverse(str.begin(), str.end());
        cout << str << "\n";
    }

    return 0;
}

