#include "Texture.h";
#include "game.hpp";
using namespace std;


SDL_Texture* Texture::LoadT(char * path,SDL_Renderer* renderer){


				SDL_Surface* tmp;
				tmp=IMG_Load(path);
				SDL_Texture* returng=NULL;
				if (tmp==NULL){
					cout<<"Error:Couldn't initialize image\n";
				}
				else{
					
					returng=SDL_CreateTextureFromSurface(renderer,tmp);
					SDL_FreeSurface(tmp);
				}
				return returng;




} 


// SDL_Texture* Texture::LoadWord(char * content,SDL_Renderer* renderer){







	
// }