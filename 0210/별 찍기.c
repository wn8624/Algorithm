#include<stdio.h>
int main()
{
    int count;
    int line = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (i; i <= line; i++){
            printf("*");
        }
        printf("\n");
        line++;
    }
    return (0);
}