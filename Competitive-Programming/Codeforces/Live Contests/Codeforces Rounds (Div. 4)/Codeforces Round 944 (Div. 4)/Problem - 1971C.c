#include<stdio.h>
int min(int a, int b)
{
    if(a > b) {
        return b;
    }
    else {
        return a;
    }
}
int max(int a, int b)
{
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c, d, flag = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        for(int i = min(a, b); i <= max(a, b); i++) {
            if(i > 12) {
                i = 1;
            }
            if(i == c || i == d) {
                flag++;
            }
        }
        if(flag == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
