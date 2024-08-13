#include <stdio.h>


int main(void)
{
    int i = 0;
    int j = 0;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j<=9; j++){
            printf("%2d : ", i*j);
        }
        printf("\n");
    }
    
    return 0;
}