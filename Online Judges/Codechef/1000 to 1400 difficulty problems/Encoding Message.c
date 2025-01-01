#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        if(n > 1) {
            for(int i = 1; i < n; i+=2) {
                char temp;
                temp = str[i];
                str[i] = str[i-1];
                str[i-1] = temp;
            }
        }
        for(int i = 0; i < n; i++) {
            if(str[i] == 'm') {
                str[i] = 'm' + 1;
            }
            else if(str[i] == 'n') {
                str[i] = 'n' - 1;
            }
            else if(str[i] < 'm') {
                str[i] = 'n' + ('m' - str[i]);
            }
            else if(str[i] > 'n') {
                str[i] = 'm' - (str[i] - 'n');
            }
        }
        printf("%s\n", str);
    }
    return 0;
}
