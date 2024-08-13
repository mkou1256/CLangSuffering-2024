#include <stdio.h>


int main(void)
{
    int month = 0;
    scanf("%d", &month);

    switch (month)
    {
        case 1:
            printf("Mutsumki\n");
            break;
        case 2:
            printf("kisaragi\n");
            break;
        case 3:
            printf("Yayoi\n");
            break;
        case 4:
            printf("Uzuki\n");
            break;


        default:
            printf("month should be between 1 and 12.\n");
            break;
    }

    return 0;
}