#include<stdio.h>
#include<string.h>
int main()
{
    char array[200];
    int i;
    gets(array);
    for(i = 0; array[i] != '\0'; i++) {
        if(array[i] == '.') {
            printf("0");
        }
        else if(array[i] == '-' && array[i+1] == '.') {
            printf("1");
            i++;
        }
        else if(array[i] == '-' && array[i+1] == '-') {
            printf("2");
            i++;
        }
    }
    return 0;
}
