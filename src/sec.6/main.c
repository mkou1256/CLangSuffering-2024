#include <stdio.h>

int main(void)
{
    int min, max, sum;

    printf("Please input the min and max value with splitted by `,`:");
    scanf("%d,%d", &min, &max);

    sum = (min + max) * (max - min + 1) * 0.5 ;
    printf("The summasion is %d\n", sum);
    return 0;
}