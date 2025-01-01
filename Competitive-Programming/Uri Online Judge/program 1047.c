#include<stdio.h>
int main()
{
    int s_hr, s_m, e_hr, e_m, d_hr, d_m;
    scanf("%d %d %d %d", &s_hr, &s_m, &e_hr, &e_m);

    d_hr = e_hr - s_hr;
    if (d_hr < 0) {
        d_hr = 24 + d_hr;
    }
    d_m = e_m - s_m;
    if(d_m < 0) {
        d_m = 60 + d_m;
        d_hr--;
    }
    if (d_hr < 0) {
        d_hr = 24 + d_hr;
    }
    if (d_hr == 0 && d_m == 0) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    }
    else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", d_hr, d_m);
    }
    return 0;
}
