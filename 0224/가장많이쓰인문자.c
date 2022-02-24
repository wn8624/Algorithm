#include <stdio.h>
#include <string.h>
int fx_findSame(int cnt[], int maxindex) //횟수가 들어간 배열과. 제일 많이 들어간 숫자
{
    int i;
    for (i = 0; i < 26; i++)
    {
        if (cnt[i] == max)
        {
            cnt[i] = max;
            break;
        }
    }
    for (int j = i; j < 26; j++)
    {
        if (cnt[j] == max)
            return 1;
    }

    return 1;
}
int main() //난제 : 문자 열안에 같은 문자를 어떻게 셀 것인가?
{
    int i, len, max = 0, maxAlpha;
    char word[100000];
    int cnt[26] = {
        0,
    };
    char alpha[26] = "bcdefghijklmnopqrstuvwxyz";

    scanf("%s", word);
    len = strlen(word);

    for (i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i == word[j])
                cnt[i - 'a']++; //해당 알파벳이 문자열에 있으면 알파벳이 문자열에 들어가는 횟수가 담긴 배열의 인덱스 증가 이 때 a는 i-a라고 하면 해당 알파벳의 인덱스로 갈거임
        }
    }
    for (i = 'A'; i <= 'Z'; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i == word[j])
                cnt[i - 'A']++;
        }
    }
    //cnt 배열 (입력받은 문자열 word에 들어간 알파벳의 "횃수"가 담긴 배열)
    for (int i = 0; i < 26; i++)
    {
        if (max < cnt[i])
        {
            max = cnt[i];
            maxAlpha = i;
        }
    }
    if (fx_findSame(cnt, maxAlpha) == 1)
        printf("?");
    else
        printf("%c", maxAlpha + 'A');
    return (0);
}