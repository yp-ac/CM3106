#include <cstdlib>
#include <graphics.h>

int main() {
    int graphDriver = DETECT, graphMode;

    initgraph(&graphDriver, &graphMode, "C:\\Program Files (x86)\\Colorado\\cs1300\\bgi");

    line(10, 10, 20, 10);
    line(20, 10, 15, 15);
    line(15, 15, 10, 10);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}