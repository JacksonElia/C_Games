#include <stdio.h>
#include <windows.h>
#include "snake.h"

int main() {
    // Hides cursor
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);

    snake_setup(50, 30, 10);

    snake_main_loop();

    return 0;
}