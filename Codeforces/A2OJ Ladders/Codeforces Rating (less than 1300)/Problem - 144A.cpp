#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++) {
        cin >> ara[i];
    }
    int largest, smallest, largest_idx = 0, smallest_idx = 0;
    largest = ara[0];
    smallest = ara[0];
    for(int i = 1; i < n; i++) {
        if(ara[i] > largest) {
            largest = ara[i];
            largest_idx = i;
        }
        if(ara[i] <= smallest) {
            smallest = ara[i];
            smallest_idx = i;
        }
    }
    if(largest_idx > smallest_idx) {
        cnt += largest_idx - 0;
        cnt += n-1 - smallest_idx;
        cnt--;
    }
    else if(largest_idx < smallest_idx) {
        cnt += largest_idx - 0;
        cnt += n-1 - smallest_idx;
    }
    cout << cnt << "\n";
    return 0;
}
