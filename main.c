#include <stdio.h>
#include <windows.h>
#include "drawingSetup.h"
#include "snake.h"
#include <unistd.h>


int main() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    hideCursor();
    int rows, columns;
    getTerminalSize(csbi, &rows, &columns);

    snake_setup(columns, rows, 10);

    snake_main_loop();

    return 0;
}