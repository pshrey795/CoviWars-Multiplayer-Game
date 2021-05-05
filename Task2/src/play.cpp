#include "character.h";
#include "Texture.h"
#include "maze.h";
using namespace std;


class play{
	
	public:
	
		char* name;
		vector<Button*> buttons;
		SDL_Texture* background;
		SDL_Renderer* renderer;
		
		Maze* maze=nullptr;
		Character* pacman=nullptr;
		vector<Character*> enemies;
		
		play(char* title,int numEnemies,SDL_Texture* poster, SDL_Renderer* localRenderer){
			name = title;
			background = poster;
			renderer = localRenderer;
			
			for(int i=0;i<numEnemies;i++){
				Character* enemy=nullptr;
				enemies.push_back(enemy);
			}
			
			for(int i=0;i<numEnemies;i++){
				enemies[i]=new Character("./../assets/corona.bmp",renderer,300,300,false);
			}
			
			pacman = new Character("./../assets/hero.bmp",renderer,20,20,false);
			
			maze = new Maze(38,21,1,renderer);
		}
		
		void render(){
			SDL_RenderCopy(renderer,background,NULL,NULL);
			pacman->render(renderer);
			maze->render(renderer);
			for(int i=0;i<enemies.size();i++){
				enemies[i]->render(renderer);
			}
			for(int i=0;i<buttons.size();i++){
				buttons[i]->render(renderer);
			}
		}
		
		void update(int* state,bool doUpdate, SoundClass* m,bool music_on){
			maze->update();
			if(collidePlayer()){
				pacman->updatePlayer();
			}
			for(int i=0;i<enemies.size();i++){
				if(pacman->collide(enemies[i],m,music_on)){
					*state = 4;
				}	
			}
		}
		
		void handle_event(SDL_Event e,int* state,SoundClass* m,bool music_on){
			pacman->changeSpeed(e);
			if(e.type==SDL_QUIT){
				*state=5;
			}else if(e.type==SDL_MOUSEBUTTONDOWN){
				int a,b;
				SDL_GetMouseState(&a,&b);
				int i = locatePointer(a,b);
				if(i>=0){
					buttons[i]->handle_event(state,m,music_on);
				}
			}else if(e.type==SDL_KEYDOWN){
				if(e.key.keysym.sym==SDLK_ESCAPE){
					*state=5;
				}else if(e.key.keysym.sym==SDLK_p){
					*state=2;
				}
			}
		}
		
	private:
	
		int locatePointer(int a,int b){
			for(int i=0;i<buttons.size();i++){
				if(buttons[i]->isInside(a,b)){
					return i;
				}
			}
			return -1;
		}
		
		bool collidePlayer(){
			if(pacman->x_speed!=0){
				if(pacman->x_speed>0){
					if(maze->mazeData[(pacman->x+pacman->width+1)/20][(pacman->y)/20]==1){
						return false;
					}else{
						return true;
					}
				}else{
					if(maze->mazeData[(pacman->x-1)/20][(pacman->y)/20]==1){
						return false;
					}else{
						return true;
					}
				}
			}else{
				if(pacman->y_speed>0){
					if(maze->mazeData[(pacman->x)/20][(pacman->y+pacman->height+1)/20]==1){
						return false;
					}else{
						return true;
					}
				}else{
					if(maze->mazeData[(pacman->x)/20][(pacman->y-1)/20]==1){
						return false;
					}else{
						return true;
					}
				}
			}
		} 
};
