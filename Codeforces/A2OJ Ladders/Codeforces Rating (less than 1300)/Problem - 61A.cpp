#include<bits/stdc++.h>
using namespace std;

int main()
{
    string string1, string2;
    cin >> string1 >> string2;
    for(int i = 0; i < string1.length(); i++) {
        if(string1[i] != string2[i]) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    return 0;
}
