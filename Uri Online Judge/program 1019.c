#include<stdio.h>
int main()
{
    int n, n1, n2, n3;
    scanf("%d", &n);
    n1 = n/3600;
    if(n1 > 0){
        n2 = (n - (n1 * 3600)) / 60;
    }
    else{
        n2 = n/60;
    }
        if(n2 > 0){
            n3 = (n - (n1 * 3600)) - (n2 * 60);
        }
        else{
            n3 = n;
        }
    printf("%d:%d:%d\n", n1, n2, n3);
    return 0;
}
