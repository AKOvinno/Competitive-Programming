#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int i, j, n, m, hash_num = 0, x, y, count_hash, start, end;
        scanf("%d %d", &n, &m);
        char str[n][m+1];
        for(int i = 0; i < n; i++) {
            scanf("%s", str[i]);
        }
        for(i = 0; i < n; i++) {
            count_hash = 0;
            for(j = 0; str[i][j] != '\0'; j++) {
                if(str[i][j] == '#') {
                    count_hash++;
                }
            }
            if(count_hash > hash_num) {
                hash_num = count_hash;
                x = i+1;
            }
        }
        for(int j = 0; str[x-1][j] != '\0'; j++) {
            if(str[x-1][j] == '#') {
                start = j+1;
                break;
            }
        }
        for(int j = m-1; str[x-1][j] != '\0'; j--) {
            if(str[x-1][j] == '#') {
                end = j+1;
                break;
            }
        }
        if(start == end) {
            printf("%d %d\n", x, start);
        }
        else {
            y = (start+end)/2;
            printf("%d %d\n", x, y);
        }
    }
    return 0;
}
