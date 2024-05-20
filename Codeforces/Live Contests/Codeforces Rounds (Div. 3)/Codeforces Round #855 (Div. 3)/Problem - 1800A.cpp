#include<iostream>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, i, j = 0, found = 0;
        cin >> n;
        char ara[n];
        for(i = 0; i < n; i++) {
            cin >> ara[i];
        }
        for(i = 0; i < n; i++) {
            if(ara[i] >= 'A' && ara[i] <= 'Z') {
                ara[i] = ara[i] + 32;
            }
        }
        char ara1[] = "meow";
        char ara2[26];
        ara2[j] = ara[0];
        j++;
        for(i = 1; i < n; i++) {
            if(ara[i] != ara2[j-1]) {
                ara2[j] = ara[i];
                j++;
            }
        }
        for(int i = 0; ara2[i] != '\0'; i++) {
            if(ara1[i] != ara2[i]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
