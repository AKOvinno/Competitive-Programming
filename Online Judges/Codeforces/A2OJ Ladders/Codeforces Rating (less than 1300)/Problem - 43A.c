#include<stdio.h>
#include<string.h>
int main()
{
    int team1 = 0, team2 = 0, n;
    scanf("%d", &n);
    char t1[11], t2[11], tmp[11];
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            scanf("%s", &t1);
            team1++;
            continue;
        }
        scanf("%s", &tmp);
        if(strcmp(tmp, t1) == 0) {
            team1++;
        }
        else {
            strcpy(t2, tmp);
            team2++;
        }
    }
    if(team1 > team2) {
        printf("%s\n", t1);
    }
    else {
        printf("%s\n", t2);
    }
    return 0;
}
