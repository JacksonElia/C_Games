#include "snake.h"
#include <string.h>
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
    char frame[height * (width + 1)]; // height lines, each with width characters and a newline
    frame[0] = '\0';
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                strncat(frame, "#", 1);
            } else {
                strncat(frame, " ", 1);
            }
        }
        strncat(frame, "\n", 1);
    }
    printf("%s", frame);
}

void snake_main_loop() {
    while (!game_over) {
        draw();
        Sleep(delay_milliseconds);
    }
}