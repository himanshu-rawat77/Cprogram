#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter (X, Y) : ");
    scanf("%d%d", &x , &y);

    if (x == 0 && y == 0)
    {
        printf("Point is on origin");
    }
    else if (x == 0)
    {
        printf("Point lie on Y axis");

    }
    else if(y == 0)
    {
        printf("Point lie on X axis");
    }
    else
    {
        return -1;
    }

    return 0;
}