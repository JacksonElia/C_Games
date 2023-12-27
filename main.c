#include "drawingSetup.h"
#include "snake.h"


int main() {
    hideCursor();
    int rows, columns;
    getTerminalSize(&rows, &columns);
    snake_setup(columns, rows, 10);

    snake_main_loop();

    return 0;
}