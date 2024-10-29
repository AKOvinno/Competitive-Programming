#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int sumDigits(int n)
{
    int sum = 0;
    while(n) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    optimize();
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    vector <int> ara;
    for(int i = 1; i < 82; i++) {
        int num = (b * pow(i, a)) + c;
        if(i == sumDigits(num) && num > 0 && num < 1000000000) {
            cnt++;
            ara.push_back(num);
        }
    }
    cout << cnt << "\n";
    for(auto v : ara) {
        cout << v << " ";
    }
    return 0;
}
