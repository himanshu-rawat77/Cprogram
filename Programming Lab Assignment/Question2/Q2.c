#include<stdio.h>
#include<math.h>
int circle_condition(int x, int y, int r, int p, int q);
int main()
{
    int x1, y1, r1, p1, q1;
    printf("Enter the Coordinates of Centre(X, Y) : ");
    scanf("%d%d", &x1, &y1);
    printf("Enter Radius : ");
    scanf("%d", &r1);
    printf("Enter the point to be checked :  ");
    scanf("%d%d", &p1, &q1);

    circle_condition(x1, y1, r1, p1, q1);

    return 0;
}


int circle_condition(int x, int y, int r, int p, int q)
{
    int equation = sqrt(pow(p - x, 2) + pow(q - y, 2));
    if (equation == r)
    {
        printf("Point lies on the Circle");
    }
    else {
        printf("Point Either lie inside or Outside of the circle ");
    }
    return 0;
}