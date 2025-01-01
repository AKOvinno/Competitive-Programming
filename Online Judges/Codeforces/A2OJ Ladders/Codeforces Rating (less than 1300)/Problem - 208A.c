#include<stdio.h>
#include<string.h>
int main()
{
    char song[201];
    scanf("%s", song);
    for(int i = 0; i < strlen(song); i++) {
        if(song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B') {
            continue;
        }
        else if(song[i] == 'U' && song[i-1] == 'W' && song[i+1] == 'B') {
            continue;
        }
        else if(song[i] == 'B' && song[i-1] == 'U' && song[i-2] == 'W') {
            continue;
        }
        else {
            if(song[i+1] == 'W' && song[i+2] == 'U' && song[i+3] == 'B') {
                printf("%c ", song[i]);
            }
            else {
                printf("%c", song[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
