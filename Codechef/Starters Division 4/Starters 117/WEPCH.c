#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int H, X, Y1, Y2, K;
        scanf("%d %d %d %d %d", &H, &X, &Y1, &Y2, &K);
        int gun, laser = 0, damage = 0;
        if(H % X == 0) {
            gun = H/X;
        }
        else {
            gun = (H/X) + 1;
        }
        while(laser < gun) {
            while(K != 0 && damage < H) {
                damage += Y1;
                K--;
                laser++;
            }
            if(damage < H) {
                damage += Y2;
                laser++;
            }
            else {
                break;
            }
            if(damage > H) {
                break;
            }
        }
        if(laser < gun) {
            printf("%d\n", laser);
        }
        else {
            printf("%d\n", gun);
        }
    }
    return 0;
}
