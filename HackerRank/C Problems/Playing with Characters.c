#include<stdio.h>

int main()
{
    char ch;
    char ara[100], ara2[100];

    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", ara);
    scanf("%[^\n]%*c", ara2);

    printf("%c\n", ch);
    printf("%s\n", ara);
    printf("%s\n", ara2);

    return 0;
}
