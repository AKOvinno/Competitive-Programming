#include<stdio.h>
#include<math.h>
#define N 4
int main()
{
    int a[N], *p;

    for(p = a; p < a+N-1; p++) {
        scanf("%d", p);
    }

    for (p = a+N-1; p>=a; p--){
        printf("%d\n", *p);
    }
    return 0;
}
