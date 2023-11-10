#include <stdio.h>
#include <stdbool.h>
#include <windows.h>

int width;
int height;
int delay_seconds;
bool game_over;

void snake_setup(int _width, int _height, int _delay_seconds) {
    width = _width;
    height = _height;
    delay_seconds = _delay_seconds;
    game_over = false;
}

void draw() {
    system("cls");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == width - 1
                || j == 0
                || j == height - 1) {
                printf("#");
            }
        }
        printf("\n");
    }
}

void snake_main_loop() {
    while (!game_over) {
        draw();
        Sleep(delay_seconds);
    }
}