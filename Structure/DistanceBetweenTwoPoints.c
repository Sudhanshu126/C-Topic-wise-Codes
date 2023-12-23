//WAP using structure and union to enter two points and then calculate the distance between them.
#include <stdio.h>
#include <math.h>
struct point {
    int x;
    int y;
};
union line {
    struct end_points {
        struct point p1;
        struct point p2;
    } points;
    float length;
};
int main()
{
    union line l;
    printf("Enter the first point (x, y): ");
    scanf("%d %d", &l.points.p1.x, &l.points.p1.y);
    printf("Enter the second point (x, y): ");
    scanf("%d %d", &l.points.p2.x, &l.points.p2.y);
    l.length = sqrt(pow(l.points.p2.x - l.points.p1.x, 2) + pow(l.points.p2.y - l.points.p1.y, 2));
    printf("The distance between the two points is %f\n", l.length);
    return 0;
}
