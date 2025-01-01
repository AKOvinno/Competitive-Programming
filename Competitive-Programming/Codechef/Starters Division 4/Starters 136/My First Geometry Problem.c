#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[5];
        scanf("%s", s);
        int maxX = 0, maxY = 0, minX = 0, minY = 0, count = 1;
        if(s[0] == '1') {
            minX = 1;
            count += 10;
        }
        if(s[1] == '1') {
            maxX = 1;
            count += 10;
        }
        if(s[2] == '1') {
            maxY = 1;
            count += 10;
        }
        if(s[3] == '1') {
            minY = 1;
            count += 10;
        }
        if(maxX && maxY) {
            count += 100;
        }
        if(maxY && minX) {
            count += 100;
        }
        if(minX && minY) {
            count += 100;
        }
        if(minY && maxX) {
            count += 100;
        }
        printf("%d\n", count);
    }
    return 0;
}
