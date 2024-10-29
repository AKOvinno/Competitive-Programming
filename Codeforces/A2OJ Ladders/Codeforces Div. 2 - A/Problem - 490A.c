#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int fre_ara[4];
    for(int i = 0; i < 4; i++) {
        fre_ara[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        fre_ara[ara[i]]++;
    }
    int min = 5001, max = -1;
    for(int i = 1; i < 4; i++) {
        if(fre_ara[i] < min) {
            min = fre_ara[i];
        }
        if(fre_ara[i] > max) {
            max = fre_ara[i];
        }
    }
    printf("%d\n", min);
    if(min == 0) {
        return 0;
    }
    int one[n], two[n], three[n];
    int i = 0, j = 0, k = 0;
    for(int ind = 0; ind < n; ind++) {
        if(ara[ind] == 1) {
            one[i] = ind+1;
            i++;
        }
        else if(ara[ind] == 2) {
            two[j] = ind + 1;
            j++;
        }
        else if(ara[ind] == 3) {
            three[k] = ind + 1;
            k++;
        }
    }
    for(int i = 0; i < min; i++) {
        printf("%d %d %d\n", one[i], two[i], three[i]);
    }
    return 0;
}
