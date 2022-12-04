#include<stdio.h>
int main()
{
    int i, j=0, k=0, l, m, n, E[5], O[5];

    for(i = 0;i < 15;i++){
        scanf("%d",&n);
        if(n%2==0){
            E[j]=n;
            j++;
            if(j==5){
                for(l = 0;l < 5;l++){
                    printf("par[%d] = %d\n",l,E[l]);
                    E[l]=0;
                    j=0;
                }
            }
        }
        else {
            O[k]=n;
            k++;
            if(k==5){
                for(l = 0;l < 5;l++){
                    printf("impar[%d] = %d\n",l,O[l]);
                    O[l]=0;
                    k=0;
                }
            }
        }
    }

    for(i = 0;i < 5;i++){
        if(O[i]==0)break;
        printf("impar[%d] = %d\n",i,O[i]);
    }

     for(i = 0;i < 5;i++){
        if(E[i]==0)break;
        printf("par[%d] = %d\n",i,E[i]);
    }
    return 0;
}
