#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char time[6];
        scanf("%s", time);
        int t1 = time[0] - 48;
        int t2 = time[1] - 48;
        int t3 = time[3] - 48;
        int t4 = time[4] - 48;
        if(t1 == 0) {
            if(t2 == 0) {
                t1 = 1;
                t2 = 2;
                printf("%d%d:%d%d AM\n", t1, t2, t3, t4);
            }
            else {
                printf("%d%d:%d%d AM\n", t1, t2, t3, t4);
            }
        }
        else if(t1 == 1 && t2 < 2) {
            printf("%d%d:%d%d AM\n", t1, t2, t3, t4);
        }
        else if(t1 == 1 && t2 >= 2) {
            if(t2 == 2) {
                t2 = ((t1*10) + t2) - 0;
                t1 = 0;
                printf("%d:%d%d PM\n", t2, t3, t4);
            }
            else {
                t2 = ((t1*10) + t2) - 12;
                t1 = 0;
                printf("%d%d:%d%d PM\n", t1, t2, t3, t4);
            }
        }
        else if(t1 >= 2) {
            int time_one = (t1*10) + t2 - 12;
            if(time_one < 10) {
                printf("%d%d:%d%d PM\n", 0,time_one,  t3, t4);
            }
            else {
                printf("%d:%d%d PM\n", time_one,  t3, t4);
            }
        }
    }
    return 0;
}
