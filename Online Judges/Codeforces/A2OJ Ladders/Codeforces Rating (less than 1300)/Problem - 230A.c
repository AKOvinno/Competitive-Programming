#include<stdio.h>
int main()
{
    int s, n, flag = 1, max = 0;
    scanf("%d %d", &s, &n);
    int strength[n], bonus[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &strength[i], &bonus[i]);
        if(strength[i] > max) {
            max = strength[i];
        }
    }
    int fre_strength[max+1];
    for(int i = 0; i < max+1; i++) {
        fre_strength[i] = -1;
    }
    for(int i = 0; i < n; i++) {
        if(fre_strength[strength[i]] == -1) {
            fre_strength[strength[i]] += (bonus[i]+1);
        }
        else {
            fre_strength[strength[i]] += bonus[i];
        }
    }
    for(int i = 0; i < max+1; i++) {
        if(fre_strength[i] != -1) {
        }
    }
    for(int i = 0; i < max+1; i++) {
        if(fre_strength[i] != -1 && s > i) {
            s += fre_strength[i];
        }
        else if(fre_strength[i] != -1 && s <= i) {
            flag = 0;
            break;
        }
    }
    if(flag) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
