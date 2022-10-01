#include <cstdlib>
#include <graphics.h>

int main() {
    int graphDriver = DETECT, graphMode;

    initgraph(&graphDriver, &graphMode, "C:\\Program Files (x86)\\Colorado\\cs1300\\bgi");

    line(10, 10, 20, 20);
    line(20, 20, 20, 40);
    line(20, 40, 10, 20);
    line(10, 20, 10, 10);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}
