#include<stdio.h>
int min(int a, int b, int c)
{
    if(a < b && a < c) {
        return a;
    }
    else if(b < a && b < c) {
        return b;
    }
    else {
        return c;
    }
}
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int toast1 = (k * l) / nl;
    int toast2 = (c * d);
    int toast3 = p / np;
    printf("%d\n", min(toast1, toast2, toast3) / n);
    return 0;
}
