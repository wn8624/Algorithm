#include <stdio.h>
int main()
{
    int subject;
    int max = 0;
    float totalAverage = 0;

    scanf ("%d", &subject);

    int score[subject];

    for(int i=0; i< subject; i++)
    {
        scanf("%d", &score[i]);
        if (score[i] > max) max = score[i];
    }

    for(int i=0; i < subject; i++)
    {
        totalAverage += (float)score[i] / max  * 100;
    }
    printf("%f\n", totalAverage / subject);
    return (0);
}