#include <cstdlib>
#include <graphics.h>

int main() {
    int graphDriver = DETECT, graphMode;

    initgraph(&graphDriver, &graphMode, "C:\\Program Files (x86)\\Colorado\\cs1300\\bgi");

    setcolor(LIGHTBLUE);
    rectangle(10, 10, 70, 70);

    setcolor(LIGHTGREEN);
    circle(40, 40, 30);

    setcolor(LIGHTCYAN);
    line(10, 40, 70, 40);
    line(10, 40, 40, 10);
    line(40, 10, 70, 40);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}
