#ifndef C_GAMES_SNAKE_H
#define C_GAMES_SNAKE_H

/**
 * Sets up the snake game, setting the game size and speed
 * @param _width the width in characters the game should be
 * @param _height the width in characters the game should be
 * @param _delay_milliseconds the delay in milliseconds between each frame
 */
void snake_setup(int _width, int _height, int _delay_milliseconds);

/**
 * Draws a frame of the snake game
 */
void draw();

/**
 * Is the main loop for the snake game
 */
void snake_main_loop();

#endif//C_GAMES_SNAKE_H
