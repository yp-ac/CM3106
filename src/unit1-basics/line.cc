#include <cstdlib>
#include <graphics.h>

int main() {
    int graphDriver = DETECT, graphMode;

    initgraph(&graphDriver, &graphMode, "C:\\Program Files (x86)\\Colorado\\cs1300\\bgi");

    line(10, 10, 20, 20);

    getch();
    closegraph();

    return EXIT_SUCCESS;
}
