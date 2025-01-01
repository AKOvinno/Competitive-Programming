#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        if(n == m) {
            printf("Yes\n");
        }
        else if(n < m) {
            printf("No\n");
        }
        else if(n % 2 == 0 && m % 2 == 0) {
            printf("Yes\n");
        }
        else if(n % 2 == 0 && m % 2 == 1) {
            printf("No\n");
        }
        else if(n % 2 == 1 && m % 2 == 1) {
            printf("Yes\n");
        }
        else if(n % 2 == 1 && m % 2 == 0) {
            printf("No\n");
        }
    }
    return 0;
}
