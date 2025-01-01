#include<stdio.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    char color[n+1];
    scanf("%s", color);
    for(i = 0; color[i] != '\0'; i++) {
        if(color[i] == color[i+1]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
