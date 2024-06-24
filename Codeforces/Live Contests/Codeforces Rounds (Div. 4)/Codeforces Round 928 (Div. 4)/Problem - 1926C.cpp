#include<stdio.h>

const int MAX = 200001;
int res[MAX];

int S(int x)
{
    int res = 0;
    while(x) {
        res += (x % 10);
        x /= 10;
    }
    return res;
}
int main()
{
    res[0] = 0;
    for(int i = 1; i < MAX; i++) {
        res[i] = res[i-1] + S(i);
    }
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", res[n]);
    }
    return 0;
}
