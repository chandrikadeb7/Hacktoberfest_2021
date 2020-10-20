#include <stdio.h>

int main()
{
    int d_min, m_min, y_min, d, m, y;
    printf("Enter a date(mm/dd/yy):");
    scanf("%d/%d/%d", &m_min, &d_min, &y_min);
    printf("Enter a date(mm/dd/yy):");
    scanf("%d/%d/%d", &m, &d, &y);
    while (m != 0 && d != 0 && y != 0)
    {

        if (y_min != y)
        {
            if (y_min > y )
            {
                d_min=d;
                m_min=m;
                y_min=y;
            }
        }
        else
        {
            if (m_min != m)
            {
                if (m_min > m)
                {
                    d_min=d;
                    m_min=m;
                    y_min=y;
                }
            }
            else
            {
                if (d_min != d)
                {
                    if (d_min > d)
                    {
                        d_min=d;
                        m_min=m;
                        y_min=y;
                    }
                }
                
            }
        }
        printf("Enter a date(mm/dd/yy):");
        scanf("%d/%d/%d", &m, &d, &y);
    }

    printf("The earliest date is %.2d/%.2d/%.2d  \n",m_min,d_min,y_min);
}