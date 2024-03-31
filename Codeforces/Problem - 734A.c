#include<stdio.h>
int main()
{
    int n, anton = 0, danik = 0;
    scanf("%d", &n);
    char ara[n];
    scanf("%s", ara);
    for(int i = 0; i < n; i++) {
        if(ara[i] == 'A') {
            anton++;
        }
        else if(ara[i] == 'D') {
            danik++;
        }
    }
    if(anton > danik) {
        printf("Anton\n");
    }
    else if(anton < danik) {
        printf("Danik\n");
    }
    else {
        printf("Friendship\n");
    }
    return 0;
}
