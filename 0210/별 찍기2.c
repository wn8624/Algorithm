#include<stdio.h>
int main()
{
    int flag;
    int count;
    int line;

    line =0;

    scanf("%d", &count);
    flag = count;
    for(int i = 0; i < count; i++)
    {
        for (int i = flag - 1; i >0; i--)
        {
            printf(" ");
        }
        for (int i = 0; i <= line; i++)
        {
            printf("*");
        }
        line++;
        flag--;
        printf("\n");
    }
    return (0);
}