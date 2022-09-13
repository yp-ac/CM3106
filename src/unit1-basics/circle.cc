#include <iostream>
#include <cstdlib>
#include <graphics.h>

int main(int argc, char* argv[]) {
    int graphDriver = DETECT, graphMode;
    int x, y, r, min;

    // initgraph(&graphDriver, &graphMode, "C:\\Program Files (x86)\\Colorado\\cs1300\\bgi");
    initwindow(180, 180, "Circle +", 100, 100);

    // x = getmaxx();
    // y = getmaxy();

    // min = (x < y) ? x : y;
    // r = min / 2 - 20;

    // circle(x / 2, y / 2, r);

    setcolor(LIGHTCYAN);
    circle(20, 20, 10);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}
