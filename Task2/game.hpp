#ifndef Game_hpp

#define Game_hpp
#include <SDL2/SDL.h>
#include <iostream>
#include <string>
// bool debug=false;
class Game{

public:
	Game();
	void init(char* title, int x,int y,int w,int h);
	void handle_event();
	void process();
	void render();
	void close();
	bool isrunning();
private:
	bool running;
	SDL_Window	*window;
	SDL_Renderer *renderer;



};


#endif