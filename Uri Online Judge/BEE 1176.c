#include<stdio.h>
int main()
{
    int i,n,k;
    long long int N[61];
    N[0]=0;
    N[1]=1;
    for(i = 2;i < 61;i++){
        N[i]=N[i-1]+N[i-2];
    }
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,N[k]);
    }
    return 0;
}
