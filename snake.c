#include "snake.h"
#include <stdbool.h>
#include <stdio.h>
#include <windows.h>


int width;
int height;
int delay_milliseconds;
bool game_over;

void snake_setup(int _width, int _height, int _delay_milliseconds) {
    width = _width;
    height = _height;
    delay_milliseconds = _delay_milliseconds;
    game_over = false;
}

void draw() {
//    system("cls");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void snake_main_loop() {
    while (!game_over) {
        draw();
        Sleep(delay_milliseconds);
    }
}