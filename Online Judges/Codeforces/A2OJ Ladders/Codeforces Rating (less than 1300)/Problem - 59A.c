#include<stdio.h>
#include<string.h>

int main()
{
    char input[100];
    int U = 0, L = 0, i;
    gets(input);

    for(i = 0; i < strlen(input); i++) {
        if(input[i] >= 'A' && input[i] <= 'Z') {
            U++;
        }
        else if(input[i] >= 'a' && input[i] <= 'z') {
            L++;
        }
    }
    if(U == L || U < L) {
        for(i = 0; i < strlen(input); i++) {
            if(input[i] >= 'A' && input[i] <= 'Z') {
                input[i] = 'a' + (input[i] - 'A');
            }
        }
    }
    else if(U > L) {
        for(i = 0; i < strlen(input); i++) {
            if(input[i] >= 'a' && input[i] <= 'z') {
                input[i] = 'A' + (input[i] - 'a');
            }
        }
    }
    printf("%s\n", input);
    return 0;

}
