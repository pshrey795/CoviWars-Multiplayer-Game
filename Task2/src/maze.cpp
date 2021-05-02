#include "maze.h"
using namespace std;

Maze::Maze(int w,int h,int l,SDL_Renderer* localRenderer){
	m_width = w;
	m_height = h;
	lvl = l;
	wTexture = Texture::LoadT("./../assets/wall.png",localRenderer);
	mazeCell.h = 100;
	mazeCell.w = 100;
	mazeCell.x = 0;
	mazeCell.y = 0;
	for(int i=0;i<m_width;i++){
		vector<int> v;
		for(int j=0;j<m_height;j++){
			v.push_back(1);
		}
		mazeData.push_back(v);
	}
	
	constructMaze();
}

void Maze::reinitialize(){
	for(int i=0;i<m_width;i++){
		for(int j=0;j<m_height;j++){
			mazeData[i][j] = 1;
		}
	}
	constructMaze();
}

void Maze::render(SDL_Renderer* renderer){
	for(int i=0;i<m_width;i++){
		mazeCell.x = 100*i;
		for(int j=0;j<m_height;j++){
			mazeCell.y = 100*j;
			if(mazeData[i][j]==1){
				SDL_RenderCopy(renderer,wTexture,NULL,&mazeCell);
			}
		}
	}
}

void Maze::update(){

}

void Maze::constructMaze(){
	stack<pair<int,int>> cells;
	cells.push(make_pair(1,1));
	while(!cells.empty()){
		vector<int> unvisited = neighbours(cells.top());
		int x = cells.top().first;
		int y = cells.top().second;
		int n = unvisited.size();
		if(n==0){
			cells.pop();
		}else{
			int k = unvisited[rand()%n];
			switch(k){
				case 0:
					mazeData[x][y-1] = 0;
					y = y - 2;
					break;
				case 1:
					mazeData[x-1][y] = 0;
					x = x - 2;
					break;
				case 2:
					mazeData[x][y+1] = 0;
					y = y + 2;
					break;
				case 3:
					mazeData[x+1][y] = 0;
					x = x + 2;
					break;
			}
			mazeData[x][y] = 0;
			cells.push(make_pair(x,y));
		}
	}
}

vector<int> Maze::neighbours(pair<int,int> p){
	vector<int> unvisited;
	int x = p.first;
	int y = p.second;
	if(y>=2){
		if(mazeData[x][y-2]==1){
			unvisited.push_back(0);
		}
	}
	if(x>=2){
		if(mazeData[x-2][y]==1){
			unvisited.push_back(1);
		}
	}
	if(y+2<=m_height){
		if(mazeData[x][y+2]==1){
			unvisited.push_back(2);
		}
	}
	if(x+2<=m_width){
		if(mazeData[x+2][y]==1){
			unvisited.push_back(3);
		}
	}
	return unvisited;
}
