#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (1 <= N && N < 100)
        printf("%d", N);
    else if (100 <= N && N <= 1000) // N이 세자리 수일 때 그전까지의 한수의 갯수를 출력해라.
    {
        int hansu = 99;
        for (int i = 100; i <= N; i++)
        {
            int num1 = i / 100;
            int num2 = (i / 10) % 10;
            int num3 = i % 10;
            if ((num3 - num2) == (num2 - num1))
                hansu++;
        }
        printf("%d", hansu);
    }
    return (0);
}