#include<stdio.h>
int main()
{
    int x, y, ans;
    scanf("%d %d", &x, &y);
    if(x>y){
        ans=(y+24)-x;
        printf("O JOGO DUROU %d HORA(S)\n", ans);
        }
    else if(y>x){
        ans=y-x;
        printf("O JOGO DUROU %d HORA(S)\n", ans);
    }
    else{
        printf("O JOGO DUROU 24 HORA(S)\n");
        }
    return 0;
}
