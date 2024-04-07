#include<stdio.h>
int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int min = 1000000005, min_index, count = 0;
    for(int i = 0; i < n; i++) {
        if(ara[i] < min) {
            min = ara[i];
            min_index = i+1;
        }
    }
    for(int i = 0; i < n; i++) {
        if(ara[i] == min) {
            count++;
        }
        if(count > 1) {
            printf("Still Rozdil\n");
            flag = 0;
            break;
        }
    }
    if(flag) {
        printf("%d\n", min_index);
    }
    return 0;
}
