#ifndef C_GAMES_DRAWINGSETUP_H
#define C_GAMES_DRAWINGSETUP_H

#include <windows.h>

void hideCursor();
void getTerminalSize(CONSOLE_SCREEN_BUFFER_INFO csbi, int *rows, int *columns);

#endif//C_GAMES_DRAWINGSETUP_H
