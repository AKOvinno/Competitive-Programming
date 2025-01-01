#include<stdio.h>

int main()
{
    char s[1000000];
    scanf("%s", s);
    int i, max = 0, A = 0, T = 0, C = 0, G = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'A') {
            A++;
            if(A > max) {
                max = A;
            }
            if(s[i+1] != 'A') {
                A = 0;
            }
        }
        if(s[i] == 'C') {
            C++;
            if(C > max) {
                max = C;
            }
            if(s[i+1] != 'C') {
                C = 0;
            }
        }
        if(s[i] == 'T') {
            T++;
            if(T > max) {
                max = T;
            }
            if(s[i+1] != 'T') {
                T = 0;
            }
        }
        if(s[i] == 'G') {
            G++;
            if(G > max) {
                max = G;
            }
            if(s[i+1] != 'G') {
                G = 0;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
