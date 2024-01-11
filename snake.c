#include "snake.h"
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>


int width;
int height;
int delay_milliseconds;
int snake_x;
int snake_y;

void snake_setup(int _width, int _height, int _delay_milliseconds) {
    width = _width;
    height = _height;
    delay_milliseconds = _delay_milliseconds;
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
            // For now, I'm treating the snake as only 1 long
            if (j == snake_x && i == snake_y) {
                frame[sizeof(frame) - 1] = '*';
            }
        }
        strncat(frame, "\n", 1);
    }
    printf("%s", frame);
}

void move_snake() {

}

void snake_main_loop() {
    snake_x = width / 2;
    snake_y = height / 2;
    while (true) {
        draw();
        Sleep(delay_milliseconds);
        char ch;
        if (kbhit()) {
            // fetch typed character into ch
            ch = getch();
            if ((int) ch == 27)
                // when esc button is pressed, then it will exit from loop
                break;
        }
    }
}