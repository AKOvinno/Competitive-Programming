#include<stdio.h>
int main()
{
    int i,j,n,l,hn,a,b;
    for(;;){
        scanf("%d",&n);
        if(n==0)break;
        int arr[n][n];
        hn=n/2;
        if(n%2==1)hn++;
        a=0;
        b=n-1;
        for(l = 1;l <= hn;l++){
            for(i = a;i <= b;i++){
                for(j = a;j <= b;j++){
                    arr[i][j]=l;
                }
            }
            a++;b--;
        }

        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(j == 0)printf("%3d",arr[i][j]);
                else printf(" %3d",arr[i][j]);
            }printf("\n");
        }printf("\n");
    }

    return 0;
}
