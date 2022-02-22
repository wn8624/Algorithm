#include <stdio.h>
int inputCheck(int num1, int num2, int num3)
{
    if (1 <= num1 && num1 <= 6)
        return (1);
    else if (1 <= num2 && num2 <= 6)
        return (1);
    else if (1 <= num2 && num2 <= 6)
        return (1);
    else
        return (0);
}

int case2(int num1, int num2, int num3, int *sameNum) // 같은 눈이 2개만 나왔을 때
{
    int num;
    if (num1 == num2)
    {
        *sameNum = num1;
        return 1;
    }
    else if (num2 == num3)
    {
        *sameNum = num2;
        return 1;
    }
    else if (num1 == num3)
    {
        *sameNum = num1;
        return 1;
    }
    else
        return 0;
}

int is_bigNum(int num1, int num2, int num3) //모두 다른 눈이 나왔을 경우
{
    int bigNum = num1;
    if (num2 > num1) //num2가 num1보다 크면 num2 반환
        bigNum = num2;
    if (num3 > bigNum)
        bigNum = num3;
    return bigNum;
}

int main()
{
    int sameNum;
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (inputCheck(num1, num2, num3))
    {
        if (num1 == num2 && num2 == num3)
            printf("%d", 10000 + (num1 * 1000));
        else if (case2(num1, num2, num3, &sameNum))
            printf("%d", 1000 + (sameNum * 100));
        else if (num1 != num2 && num2 != num3 && num1 != num3)
            printf("%d", is_bigNum(num1, num2, num3) * 100);
    }
    return (0);
}