#include <stdio.h>
#include <windows.h>
#include "drawingSetup.h"
#include "snake.h"


int main() {
    hideCursor();

    snake_setup(50, 30, 10);

    snake_main_loop();

    return 0;
}