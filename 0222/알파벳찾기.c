#include <stdio.h>
#include <string.h>

int main()
{
    char s[100]; //문자100개가 들어갈 수 있는 배열 선언
    int arr[27];
    scanf("%s", s); //문자열을 입력받은뒤 배열 s에 저장
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
            arr[i] = i;
    }
    return (0);
}