#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, count = 0;
        scanf("%d", &n);
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        int i = 0, j = 0;
        while(j != n) {
            if(b[j] >= a[i]) {
                i++;
                j++;
            }
            else {
                count++;
                j++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
