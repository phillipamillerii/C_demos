#include <curses.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
	WINDOW* win = initscr();
	// Take keyboard input, and don't wait on key call
	keypad(win, true);
	nodelay(win, true);
	
	// Player start Position
	int posX = 0;
	int posY = 0;
	
	//Food Position Random up to 20 
	int foodX = rand() % 20;
	int foodY = rand() % 20;

	// Manage direction
	int dirX = 1;
	int dirY = 1;

	// Process keyboard press
	while (true) {
		// Pull the pressed key
		int pressed = wgetch(win);
		
		// Key left
		if (pressed == KEY_LEFT) {
			dirX = -1;
			dirY = 0;
		}
		if (pressed == KEY_RIGHT) {
                        dirX = 1;
                        dirY = 0;
                }
		if (pressed == KEY_UP) {
                        dirX = 0;
                        dirY = -1;
                }
		if (pressed == KEY_DOWN) {
                        dirX = 0;
                        dirY = 1;
                }

		// update direction of player
		posX += dirX;
		posY += dirY;

		// Clear screen
		erase();

		// Draw player
		mvaddstr(posY, posX, "*");

		// Draw Food
		mvaddstr(foodY, foodX, "&");

		// Create new food if first is eatten
		if (foodX == posX && foodY == posY) {
			foodX = rand() % 20;
			foodY = rand() % 20;
		}

		// delay process : in millaseconds
		usleep(100000);

	}

	// Close Window
	endwin();


}
