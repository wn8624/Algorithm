#include <stdio.h>
int main()
{
    int h, m, time;
    scanf("%d %d\n%d", &h, &m, &time);
    if ((0 <= h && h <= 23) && (0 <= m && m <= 59) && (0 <= time && time <= 1000))
    {
        m = m + time;
        if (m % 60 == 0)
        {
            h++;
            m = 60 - m ;
            if (h > 23) h = 24 - h;
        } 
        printf("%d %d", h, m);
    }
    return (0);
}
