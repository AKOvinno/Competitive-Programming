#include<stdio.h>
int main()
{
    int page, day = 0;
    scanf("%d", &page);
    int week[7];
    for(int i = 0; i < 7; i++) {
        scanf("%d", &week[i]);
    }
    int i = 0;
    while(page > 0) {
        if(day == 7) {
            day = 0;
            i = 0;
        }
        page -= week[i];
        i++;
        day++;
        //printf("page = %d, day = %d, week = %d, i = %d\n", page, day, week[i-1], i);
    }
    printf("%d\n", day);
    return 0;
}
