#include "drawingSetup.h"
#include <windows.h>

void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void getTerminalSize(CONSOLE_SCREEN_BUFFER_INFO csbi, int *rows, int *columns) {
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    *rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    *columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
}