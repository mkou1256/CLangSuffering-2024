#include <stdio.h>

int main(void)
{
    int price_drink = 198;
    int n_drink = 1;
    int price_milk = 138;
    int n_milk = 2;

    int payment = 1000;

    printf("changes = %d\n", payment - (int)((price_drink*n_drink + price_milk*n_milk)*1.05));
}