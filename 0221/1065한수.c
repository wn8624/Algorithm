#include <stdio.h>

int is_hansoo(int input) //여기서의 input은 세자리이다.
{
    int num1rd, num2rd, num3rd;
    num3rd = input / 100;
    num2rd = (input / 10) % 10;
    num1rd = input % 10;
    if ((num2rd - num1rd) == (num3rd - num2rd))
        return 1;
    else
        return 0;
}
int main()
{
    int count = 0;
    int input;
    scanf("%d", &input);
    if (input < 10)
        printf("%d", input);
    else if (input < 100)
        printf("%d", input);
    else if (input < 1000)
    {
        for (int i = 100; i <= input; i++)
        {
            if (is_hansoo(i))
            {
                count++;
                count = count + 99;
            }
        }
        printf("%d", count);
    }
    return (0);
}