#include<stdio.h>
int main()
{
    int n, m, count = 0, total_count = 0;
    scanf("%d", &n);
    int pedal[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &pedal[i]);
    }
    scanf("%d", &m);
    int rear[m];
    for(int i = 0; i < m; i++) {
        scanf("%d", &rear[i]);
    }
    int max = -1, pre_max = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(rear[j] % pedal[i] == 0) {
                if(rear[j] / pedal[i] >= max) {
                    max = rear[j] / pedal[i];
                    count++;
                }
            }
        }
        if(count > 0) {
            total_count++;
            count = 0;
        }
        if(pre_max < max && total_count > 0) {
            total_count = 1;
        }
        pre_max = max;
    }
    printf("%d\n", total_count);
    return 0;
}
