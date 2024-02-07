#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, count = 0, flag = 0;
        cin >> a >> b >> c;
        if(a == b && b == c) {
            cout << 0 << "\n";
            flag = 1;
        }
        else if(a != b && b != c && a != c) {
            cout << -1 << "\n";
            flag = 1;
        }
        else {
            if(a == c && abs(a-b) != 1 && abs(a-b) % 2 == 0) {
                if(a > b) {
                    while(a != b) {
                        a--;
                        b++;
                        count++;
                    }
                }
                else {
                    while(a != b) {
                        a++;
                        b--;
                        count++;
                    }

                }
            }
            else if(b == c && abs(a-b) != 1 && abs(a-b) % 2 == 0) {
                if(a > b) {
                    while(a != b) {
                        a--;
                        b++;
                        count++;
                    }
                }
                else {
                    while(a != b) {
                        a++;
                        b--;
                        count++;
                    }

                }
            }
            else if(a == b && abs(a-c) != 1 && abs(a-c) % 2 == 0) {
                if(a > c) {
                    while(a != c) {
                        a--;
                        c++;
                        count++;
                    }
                }
                else {
                    while(a != c) {
                        a++;
                        c--;
                        count++;
                    }

                }
            }
            else {
                cout << -1 << "\n";
                flag = 1;
            }
        }
        if( !flag ) {
            cout << count << "\n";
        }
    }
    return 0;
}
