#include <stdio.h>


int main(void)
{
    int score;
    printf("Please input the test score: ");
    scanf("%d", &score);

    if (score > 100) 
    {
        printf("Test score is fixxed because it l.g. 100.");
        score = 100;
    }    
    printf("The test score is %d. \n", score);

    return 0;
}