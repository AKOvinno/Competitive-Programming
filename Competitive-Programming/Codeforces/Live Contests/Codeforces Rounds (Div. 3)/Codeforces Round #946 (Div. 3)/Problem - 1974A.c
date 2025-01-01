#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int x, y, screen = 0;
        scanf("%d %d", &x, &y);
        if((y % 2) == 0) {
            screen += (y/2);
        }
        else {
            screen += (y/2);
            screen += 1;
        }
        int total = (screen * 15) - (y*4);
        if(x <= total) {
            printf("%d\n", screen);
        }
        else {
            x -= total;
            if(x % 15 == 0) {
                screen += (x/15);
            }
            else {
                screen += (x/15);
                screen++;
            }
            printf("%d\n", screen);
        }
    }
    return 0;
}
