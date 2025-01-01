#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int count = n;
        for(int i = 0; i < n; i++) {
            if(str[i] == str[i+1]) {
                i+=1;
                count--;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
