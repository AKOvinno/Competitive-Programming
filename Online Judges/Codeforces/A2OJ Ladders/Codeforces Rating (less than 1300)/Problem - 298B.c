#include<stdio.h>
int main()
{
    int t, s1, s2, e1, e2, count = 0, flag = 0;
    scanf("%d %d %d %d %d", &t, &s1, &s2, &e1, &e2);
    char str[t+1];
    scanf("%s", str);
    for(int i = 0; i < t; i++) {
        if(s1 == e1 && s2 == e2) {
            break;
        }
        count++;
        if(str[i] == 'E' && s1 < e1) {
            s1++;
        }
        else if(str[i] == 'N' && s2 < e2) {
            s2++;
        }
        else if(str[i] == 'S' && s2 > e2) {
            s2--;
        }
        else if(str[i] == 'W' && s1 > e1) {
            s1--;
        }
        else {
            continue;
        }
    }
    if(s1 == e1 && s2 == e2) {
        flag = 1;
    }
    if(flag) {
        printf("%d\n", count);
    }
    else {
        printf("-1\n");
    }
    return 0;
}
