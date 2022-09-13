#include <iostream>
#include <cstdlib>
#include <graphics.h>

typedef struct {
    float x, y;
} Point;

Point lerp(Point p0, Point p1, float t);
Point quadratic(Point p0, Point p1, Point p2, float t);
Point cubic(Point p0, Point p1, Point p2, Point p3, float t);

int main() {
    float t = 0;
    float step = 0.02;
    int status;

    initwindow(800, 800, "Bezier Curve");
    
    Point p0 = {20, getmaxy()/2};
    Point p1 = {getmaxx() / 3, 50};
    Point p2 = {getmaxx() / 3, getmaxy()/2 + 300};
    Point p3 = {getmaxx() - 50, getmaxy()/2};
    Point tp;

    moveto(p0.x, p0.y);

    while (t <= 1) {
        t += step;
        tp = cubic(p0, p1, p2, p3, t);
        lineto(tp.x, tp.y);
        delay(30);
    }

    // printf("x:%f, y:%f\n", getx(), gety());
    std::cout << getx() << " <x y> " << gety() << std::endl;

    getch();
    closegraph();

    return EXIT_SUCCESS;
}

Point lerp(Point p0, Point p1, float t) {
    Point px;

    px.x = (1 - t) * p0.x + t * p1.x;
    px.y = (1 - t) * p0.y + t * p1.y;

    return px;
}

Point quadratic(Point p0, Point p1, Point p2, float t) {
    return lerp(lerp(p0, p1, t), lerp(p1, p2, t), t);
}

Point cubic(Point p0, Point p1, Point p2, Point p3, float t) {
    return lerp(quadratic(p0, p1, p2, t), quadratic(p1, p2, p3, t), t);
}
