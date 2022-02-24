#include <stdio.h>
#include <string.h>

int main()
{
    int test, N;
    char word[20];
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        scanf("%d %s", &N, word);

        for (int j = 0; j < strlen(word); j++)
        {
            for (int k = 0; k < N; k++)
                printf("%c", word[j]);
        }
        printf("\n");
    }

    return (0);
}