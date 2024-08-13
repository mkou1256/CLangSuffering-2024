#include <stdio.h>


int main(void)
{
    int input_year;
    printf("Please input year: ");
    scanf("%d", &input_year);

    if (input_year % 4 == 0) 
    {
        printf("Summer Olympic was held in %d\n", input_year);
    }    

    if (input_year % 4 == 2) 
    {
        printf("Winter Olympic was held in %d\n", input_year);
    }    

    return 0;
}