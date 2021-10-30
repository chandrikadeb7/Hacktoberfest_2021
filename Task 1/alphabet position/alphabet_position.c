#include <stdio.h>
int main()
{
    char c1, c2;
    int diff, position;

    c1='A';
    diff=(int)c1 -1;

    printf("enter a captial letter:");
    scanf("%c", &c2);

    position=(int)c2-diff;

    printf("the position of the alphabet entered is: %d", position);

    return 0;

}
