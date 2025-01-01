#include<stdio.h>
int main()
{
    int n, d, divu_sing = 0;
    scanf("%d %d", &n, &d);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        divu_sing += ara[i];
    }
    int divu_rest = (n - 1) * 10;
    int total = divu_rest + divu_sing;
    if(total <= d) {
        printf("%d\n", (d-total+divu_rest)/5);
    }
    else {
        printf("-1\n");
    }
    return 0;
}
