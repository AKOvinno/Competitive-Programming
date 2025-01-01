#include<stdio.h>
int min(int n, int m)
{
    if(n < m) {
        return n;
    }
    else {
        return m;
    }
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(min(n, m) % 2 == 0) {
        printf("Malvika\n");
    }
    else {
        printf("Akshat\n");
    }
    return 0;
}
