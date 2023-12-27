#ifndef C_GAMES_DRAWINGSETUP_H
#define C_GAMES_DRAWINGSETUP_H

#include <windows.h>

/**
 * This function hides the cursor in the terminal
 */
void hideCursor();

/**
 * This function helps to get the width and height in characters of the terminal window
 * @param rows the memory address to the int containing how many rows there are
 * @param columns the memory address to the int containing how many columns there are
 */
void getTerminalSize(int *rows, int *columns);

#endif//C_GAMES_DRAWINGSETUP_H
