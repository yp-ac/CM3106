#include <cstdlib>
#include <graphics.h>

int main() {
    int graphDriver = DETECT, graphMode;

    initgraph(&graphDriver, &graphMode, "C:\\Program Files (x86)\\Colorado\\cs1300\\bgi");

    // line from (10, 10) to (20, 20)
    line(10, 10, 20, 20);

    // pixel at 50, 50
    putpixel(50, 50, YELLOW);

    // circle at (20, 20) with radius 10
    setcolor(LIGHTBLUE);
    circle(20, 20, 10);

    moveto(30, 30);
    lineto(40, 50);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}
