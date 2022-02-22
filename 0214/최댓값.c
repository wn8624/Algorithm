#include <stdio.h>

int main()
{
    int max = 0, arr[9], index; //max값 0으로 초기화 
    for (int i=0; i<9; i++) //9번 반복문
    {
        scanf("%d", &arr[i]); //9번동안 배열에 입력값 받음
        if  (max < arr[i]) //받을때마다 max보다 받은 배열의 값이 크면 
        {
            max = arr[i]; //max에는 받은 배열의 값중 제일 큰 값이 들어감 
            index = i; //index라는 변수에 해당하는 수의 인덱스값이 들어감 
        }
    }
    printf("%d\n%d", max, index + 1); 
    return (0);
}