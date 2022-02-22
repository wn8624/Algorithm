#include <stdio.h>
int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    if ((0 <= h && h <= 23) && (0 <= m && m <= 59))
    {
        m = m - 45;
        if (m < 0)
        {
            h--;
            m = 60 - (m * -1) ;
            if (h < 0) h = 24 - (h  * -1);
        } 
        printf("%d %d", h, m);
    }
    return (0);
}
