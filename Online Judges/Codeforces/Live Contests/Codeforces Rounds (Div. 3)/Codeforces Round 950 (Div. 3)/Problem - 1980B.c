#include<stdio.h>
void countSort(int ara[], int n)
{
    int max = ara[0];
    for(int i = 1; i < n; i++) {
        if(ara[i] > max) {
            max = ara[i];
        }
    }
    int count[max+1];
    for(int i = 0; i <= max; i++) {
        count[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        count[ara[i]]++;
    }
    for(int i = max, j = 0; i >= 0; i--) {
        if(count[i] > 0) {
            while(count[i]--) {
                ara[j] = i;
                j++;
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, f, k, flag = 0;
        scanf("%d %d %d", &n, &f, &k);
        int ara_ovi[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara_ovi[i]);
        }
        f = ara_ovi[f-1];
        countSort(ara_ovi, n);
        for(int i = 0; i < k; i++) {
            if(ara_ovi[i] == f) {
                flag = 1;
            }
        }
        if(!flag) {
            printf("NO\n");
        }
        else {
            if(ara_ovi[k] == f) {
                printf("MAYBE\n");
            }
            else {
                printf("YES\n");
            }
        }
    }
    return 0;
}
