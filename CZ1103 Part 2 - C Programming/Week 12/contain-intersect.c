#include <stdio.h>
#include <math.h>

struct circle
{
    double radius;
    double x;
    double y;
};

int intersect(struct circle c1, struct circle c2);
int contain(struct circle *c1, struct circle *c2);

void main()
{
    struct circle c1;
    struct circle c2;

    c1.radius = 5;
    c1.x = 1;
    c1.y = 0;

    c2.radius = 2;
    c2.x = 1;
    c2.y = 0;
    printf("%f %f %f\n", c1.radius, c1.x, c1.y);
    printf("%f %f %f\n", c2.radius, c2.x, c2.y);

    int result1, result2;
    result1 = intersect(c1, c2);
    printf("%d\n", result1);
    printf("%d\n", result1);
}

int intersect(struct circle c1, struct circle c2)
{
    double c_distance = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
    double r_distance = c1.radius + c2.radius;
    return c_distance <= r_distance? 1:0;
}

int contain(struct circle *c1, struct circle *c2)
{
    double c_distance = sqrt(pow(c1->x - c2->x, 2) + pow(c1->y - c2->y, 2));
    double distance = c2->radius + c_distance;
    return c1->radius >= distance? 1:0;
}

