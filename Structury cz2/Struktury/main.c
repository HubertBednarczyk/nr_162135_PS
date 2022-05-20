#include <stdio.h>
#include <stdlib.h>
#include "linesegment.h"
#include "point.h"


int main()
{
    LineSegment odc1=MakeLineSegment(2,3,4,5);
    show(&odc1);
    Point a = makePoint(4,6);
    Point b = makePoint(5,7);
    LineSegment odc2=MakeLineSegmentPP(&a,&b);
    show(&odc2);
    printf("i jej dlugosc: %lf",strlen(&odc1));

    return 0;
}
