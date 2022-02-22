#include <stdio.h>
int *notSelfNumber(int *arr);

int main()
{
    int *ptrArr;
    int arr[10000] = {0,};
    ptrArr = notSelfNumber(arr);
    for (int i = 1; i<10000; i++)
    {
        if ( arr[i] != 1)
        printf("%d\n", i);
    }
    return (0);
}

int *notSelfNumber(int *arr)
{
    int res = 0;
    for (int i=1; i <= 10000; i++)
    {
        if (i < 10)
        {
            res = i + i;
            arr[res] = 1;
        }
        else if (10 <= i && i < 100)
        {
            res = i + (i /10) + (i % 10);
            arr[res] = 1;
        }
        else if (100 <= i && i < 1000)
        {
            res = i + (i/100) + (i/10) + (i%10);
            arr[res] = 1;
        }
        else if(1000 <= i && i < 10000)
        {
            res = i + (i/1000) + (i/100) + (i/10) + (i%10);
            arr[res] = 1;
        }
    }
    return arr;
}