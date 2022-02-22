#include <stdio.h>
int *notSelfNumber(int *arr);

int main()
{
    int *ptrArr;
    int arr[10000] = {
        0,
    };
    ptrArr = notSelfNumber(arr);    //ptrArr에는 셀프넘버가 아닌 수의 인덱스에 1이 적힌 배열의 시작주소가 저장됨.
    for (int i = 1; i < 10000; i++) //셀프넘버 인덱스는 0 그외에는 1로 초기화된 배열을 처음부터 끝까지 돌림.
    {
        if (arr[i] != 1) //배열의 인덱스값과 값은 동일 + 1이 아니면 셀프넘버이니 i 출력하면 됨.
            printf("%d\n", i);
    }
    return (0);
}

int *notSelfNumber(int *arr)
{
    int res = 0;
    for (int i = 1; i <= 10000; i++)
    {
        if (i < 10)
        {
            res = i + i;
            arr[res] = 1;
        }
        else if (i < 100)
        {
            res = i + (i / 10) + (i % 10);
            arr[res] = 1;
        }
        else if (i < 1000)
        {
            res = i + (i / 100) + ((i % 100) / 10) + ((i % 100) % 10);
            arr[res] = 1;
        }
        else if (i < 10000)
        {
            res = i + (i / 1000) + ((i % 1000) / 100) + (((i % 1000) % 100) / 10) + (((i % 1000) % 100) % 10);
            if (res <= 10000)
                arr[res] = 1;
        }
    }
    return arr;
}