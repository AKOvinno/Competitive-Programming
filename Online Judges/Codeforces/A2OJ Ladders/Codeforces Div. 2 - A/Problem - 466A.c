#include<stdio.h>
int calculate_extra(int extra_a, int extra_b, int a, int b)
{

    int extra_price1 = extra_a * a;
    int extra_price2 = extra_b * b;
    if(extra_price1 <= extra_price2) {
        return extra_price1;
    }
    else {
        return extra_price2;
    }
}
int main()
{
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    int one_ride_price = n * a;
    int multiple_ride_tickets, multiple_ride_price, extra, extra_price;
    if(n % m == 0) {
        multiple_ride_tickets = n / m;
        multiple_ride_price = (n / m) * b;
    }
    else {
        multiple_ride_tickets = n / m;
        int extra_a = n - ((n/m) * m);
        int extra_b = 1;
        extra_price = calculate_extra(extra_a, extra_b, a, b);
        if(b >= a) {
            multiple_ride_price = (n / m) * b + extra_price;
        }
        else {
            multiple_ride_price = (n / m) * b + extra_price;
        }
        if(multiple_ride_tickets == 0) {
            multiple_ride_price = b;
        }
    }
    if(one_ride_price <= multiple_ride_price) {
        printf("%d\n", one_ride_price);
    }
    else {
        printf("%d\n", multiple_ride_price);
    }
    return 0;
}
