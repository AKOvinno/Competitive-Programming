#include<stdio.h>
int main()
{
    int r, c, r_count = 0, c_count = 0, flag = 0;
    scanf("%d %d", &r, &c);
    char cake[r][c+1];
    for(int i = 0; i < r; i++) {
        scanf("%s", cake[i]);
    }
    // row count
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(cake[i][j] == 'S') {
                flag = 1;
            }
        }
        if(flag) {
            flag = 0;
        }
        else {
            r_count++;
        }
    }
    // column count
    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++) {
            if(cake[i][j] == 'S') {
                flag = 1;
            }
        }
        if(flag) {
            flag = 0;
        }
        else {
            c_count++;
        }
    }
    printf("%d\n", (r_count * c) + (c_count * r) - (r_count * c_count));
    return 0;
}
