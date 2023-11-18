#include <stdio.h>
#include <windows.h>
#include "drawingSetup.h"
#include "snake.h"
#include <unistd.h>


int main() {
    hideCursor();

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    printf("columns: %d\n", columns);
    printf("rows: %d\n", rows);


//    snake_setup(50, 30, 10);
//
//    snake_main_loop();

    return 0;
}