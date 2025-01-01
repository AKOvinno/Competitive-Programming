#include<stdio.h>
void print_hash()
{
    printf("##");
}
void print_dot()
{
    printf("..");
}
void type1(int n)
{
    for(int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            print_hash();
            }
            else {
                print_dot();
            }
        }
}
void type2(int n)
{
    for(int j = 0; j < n; j++) {
        if(j % 2 == 0) {
            print_dot();
        }
        else {
            print_hash();
            }
        }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(n == 1) {
            print_hash();
            printf("\n");
            print_hash();
            printf("\n");
            continue;
        }
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                type1(n);
                printf("\n");
                type1(n);
            }
            else {
                type2(n);
                printf("\n");
                type2(n);
            }
            printf("\n");
        }
    }
    return 0;
}
