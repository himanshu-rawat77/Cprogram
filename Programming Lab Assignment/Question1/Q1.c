#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    float slope1, slope2;
    printf("Enter Point 1(x1, y1) : ");
    scanf("%d%d", &x1, &y1);
    printf("Enter Point 2(x2, y2) :  ");
    scanf("%d%d", &x2, &y2);
    printf("Enter Point 3(x3, y3) :  ");
    scanf("%d%d", &x3, &y3);

    slope1 = (y2 - y1)/(x2 - x1);
    slope2 = (y3 - y2)/(x3 - x2);

    if (slope1 == slope2)
    {
        printf("All three point lie on same line");
    }
    else{
        printf("Not on same line");
    }
    return 0;

}