#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        if(n<=9)
            printf("%d\n",n);
        else
        {
            int res=9,value=10,cnt=1;
            for(int i=10; i<=n; i+=value)
            {
                if(cnt==10)
                {
                    value*=10;
                    cnt=1;
                }
                res++;
                cnt++;
            }
            printf("%d\n",res);
        }
    }
    return 0;
}
