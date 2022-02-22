//첫째 줄에 오리고기를 넣으 시간과 분이 입력되고 두번쨰 줄에는 소요시간을 입력한다.
//출력에는 소요시간에 따른, 오리고기가 조리완료되는 시간이 출력된다.

#include <stdio.h>
int main()
{
    int hour, min, time, count;
    scanf("%d %d", &hour, &min);
    scanf("%d", &time);
    min = min + time;
    count = min / 60;

    for (int i = 0; i < count; i++)
        hour++;
    if (hour > 23)
        hour = hour % 24;
    if (min > 59)
        min = min % 60;
    printf("%d %d", hour, min);
    return (0);
}
