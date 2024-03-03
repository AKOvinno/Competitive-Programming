#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, A1, AN;
        scanf("%d", &n);
        int b[n];
        int a[n+1];
        for(int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        if(b[0] == 0) {
            a[0] = 1;
            a[1] = 1;
        }
        else {
            a[0] = 0;
            a[1] = 1;
        }
        for(int i = 1; i < n; i++) {
            if(b[i] == 0) {
                if(a[i] == 0) {
                    a[i+1] = 0;
                }
                else {
                    a[i+1] = 1;
                }
            }
            else if(b[i] == 1) {
                if(a[i] == 0) {
                    a[i+1] = 1;
                }
                else {
                    a[i+1] = 0;
                }
            }
        }
        if(a[0] == a[n]) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
