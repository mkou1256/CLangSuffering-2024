#include <stdio.h>

int main(void)
{
    int original_price;

    printf("Input the original price: ");
    scanf("%d", &original_price);

    printf("the price of 10 percent discount: %d\n", (int)(original_price * 0.9));
    printf("the price of 30 percent discount: %d\n", (int)(original_price * 0.7));
    printf("the price of 50 percent discount: %d\n", (int)(original_price * 0.5));
    printf("the price of 80 percent discount: %d\n", (int)(original_price * 0.2));
}