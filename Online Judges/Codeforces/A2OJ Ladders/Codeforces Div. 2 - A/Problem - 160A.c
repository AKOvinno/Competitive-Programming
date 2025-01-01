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
    for(int i = 0, j = 0; i <= max; i++) {
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
    int n, sum = 0, collect = 0, count = 0;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        sum += ara[i];
    }
    countSort(ara, n);
    for(int i = n-1; i >= 0; i--) {
        collect += ara[i];
        sum -= ara[i];
        count++;
        if(collect > sum) {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}
