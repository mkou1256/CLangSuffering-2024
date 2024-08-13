#include <stdio.h>


int main(void)
{
    int no;
    scanf("%d", &no);

    switch (no)
    {
        case 1:
            printf("Nobita\n");
            break;
        case 2:
            printf("Sizuka\n");
            break;

        default:
            printf("No such number person.\n");
            break;
    }

    return 0;
}