#include<stdio.h>

int main()
{
    int v, t, s;

    while(2 == scanf("%d %d", &v, &t)) {
        s = 2*t*v;
        printf("%d\n", s);
    }
    return 0;
}
